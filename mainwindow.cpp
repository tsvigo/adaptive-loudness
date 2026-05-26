// #include "mainwindow.h"
// #include "ui_mainwindow.h"

// MainWindow::MainWindow(QWidget *parent)
//     : QMainWindow(parent)
//     , ui(new Ui::MainWindow)
// {
//     ui->setupUi(this);
// }

// MainWindow::~MainWindow()
// {
//     delete ui;
// }
////////////////////////////////////////////////////////
#include <cmath>
///
#include <QElapsedTimer>
#include <QEventLoop>
///
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSettings>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QtMath>
#include <cstdint>
#include <QThread>
static constexpr int kSampleRate = 16000;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->btnStartStop,    &QPushButton::clicked, this, &MainWindow::onStartStopClicked);
    connect(ui->btnCalibrate,    &QPushButton::clicked, this, &MainWindow::onCalibrateClicked);
    connect(ui->btnRefresh,      &QPushButton::clicked, this, &MainWindow::onRefreshDevicesClicked);
    connect(ui->btnSave,         &QPushButton::clicked, this, &MainWindow::onSaveSettings);
    connect(ui->btnLoad,         &QPushButton::clicked, this, &MainWindow::onLoadSettings);
    connect(&tickTimer, &QTimer::timeout, this, &MainWindow::onTick);

    onLoadSettings();
    detectDevices();
}

MainWindow::~MainWindow() {
    stopCapture();
    delete ui;
}

// ---------- утилиты ----------

void MainWindow::log(const QString &msg) {
    ui->logView->appendPlainText(
        QDateTime::currentDateTime().toString("HH:mm:ss ") + msg);
}

QString MainWindow::runCmd(const QString &program, const QStringList &args) {
    QProcess p;
    p.start(program, args);
    p.waitForFinished(2000);
    return QString::fromUtf8(p.readAllStandardOutput()).trimmed();
}

void MainWindow::setSinkVolume(double v) {
    // v = qBound(0.0, v, 1.0);
    //     justSetByMe = true;
    // runCmd("wpctl", {"set-volume", sinkName, QString::number(v, 'f', 3)});
        v = qBound(0.0, v, 1.0);
        justSetByMe = true;
        int percent = int(std::round(v * 100.0));
        runCmd("pactl", {"set-sink-volume", sinkName,
                         QString("%1%").arg(percent)});

}

double MainWindow::getSinkVolume() {
    // QString r = runCmd("wpctl", {"get-volume", sinkName});
    // // формат "Volume: 0.29"
    // auto parts = r.split(' ');
    // if (parts.size() >= 2) return parts[1].toDouble();
    // return 0.3;

    QString r = runCmd("pactl", {"get-sink-volume", sinkName});
    // Пример: "Volume: front-left: 19005 /  29% / -32.39 dB, ..."
    int pIdx = r.indexOf('%');
    if (pIdx < 0) return 0.3;
    // ищем число перед '%'
    int i = pIdx - 1;
    while (i >= 0 && (r[i].isDigit() || r[i] == '.' || r[i] == ' '))
        --i;
    QString numStr = r.mid(i + 1, pIdx - i - 1).trimmed();
    bool ok = false;
    double percent = numStr.toDouble(&ok);
    if (!ok) return 0.3;
    return percent / 100.0;
}


void MainWindow::detectDevices() {
    sinkName    = runCmd("pactl", {"get-default-sink"});
    sourceName  = runCmd("pactl", {"get-default-source"});
    monitorName = sinkName + ".monitor";
    ui->sinkEdit->setText(sinkName);
    ui->sourceEdit->setText(sourceName);
    ui->monitorEdit->setText(monitorName);
    log("Devices detected.");
}

void MainWindow::onRefreshDevicesClicked() {
    bool wasRunning = running;
    if (running) onStartStopClicked();
    detectDevices();
    if (wasRunning) onStartStopClicked();
}

// ---------- захват аудио ----------

void MainWindow::startCapture() {
    auto makeProc = [this](const QString &dev) {
        QProcess *p = new QProcess(this);
        QStringList args = {
            "--raw", "--format=s16le",
            QString("--rate=%1").arg(kSampleRate),
            "--channels=1", "-d", dev
        };
        p->start("parec", args);
        return p;
    };
    micProc  = makeProc(sourceName);
    playProc = makeProc(monitorName);

    connect(micProc,  &QProcess::readyReadStandardOutput,
            this, &MainWindow::readMicData);
    connect(playProc, &QProcess::readyReadStandardOutput,
            this, &MainWindow::readPlayData);
}

void MainWindow::stopCapture() {
    for (auto **pp : {&micProc, &playProc}) {
        if (*pp) {
            (*pp)->terminate();
            if (!(*pp)->waitForFinished(800)) (*pp)->kill();
            (*pp)->deleteLater();
            *pp = nullptr;
        }
    }
    micBuf.clear();
    playBuf.clear();
}

void MainWindow::readMicData()  { if (micProc)  micBuf  += micProc->readAllStandardOutput();  }
void MainWindow::readPlayData() { if (playProc) playBuf += playProc->readAllStandardOutput(); }

double MainWindow::computeRmsDb(QByteArray &buf, int sampleRate, double windowSec) {
    int wantBytes = int(sampleRate * windowSec) * 2;
    if (buf.size() < wantBytes) return -90.0;

    // берём последние wantBytes и очищаем накопленное
    QByteArray window = buf.right(wantBytes);
    buf.clear();

    const int16_t *s = reinterpret_cast<const int16_t*>(window.constData());
    int n = window.size() / 2;
    if (n < 100) return -90.0;

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double v = double(s[i]) / 32768.0;
        sum += v * v;
    }
    double rms = std::sqrt(sum / n);
    if (rms < 1e-6) return -90.0;
    return 20.0 * std::log10(rms);
}

// ---------- кнопка Старт/Стоп ----------

void MainWindow::onStartStopClicked() {
    if (!running) {
        if (sinkName.isEmpty() || sourceName.isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Устройства не определены.");
            return;
        }
        startCapture();
        targetDb    = ui->targetDbSpin->value();
        lastSetVol  = getSinkVolume();
        tickTimer.start(int(ui->updateIntervalSpin->value() * 1000));
        running = true;
        ui->btnStartStop->setText("Стоп");
        log(QString("Старт. Цель: %1 dB").arg(targetDb, 0, 'f', 1));
    } else {
        tickTimer.stop();
        stopCapture();
        running = false;
        ui->btnStartStop->setText("Старт");
        log("Остановлено.");
    }
}

// ---------- основной цикл ----------

void MainWindow::onTick() {
    double winSec     = ui->sampleDurationSpin->value();
    double silenceDb  = ui->silenceDbSpin->value();
    double maxStep    = ui->maxStepSpin->value() / 100.0;
    double smoothing  = ui->smoothingSpin->value();
    double volMin     = ui->volMinSpin->value() / 100.0;
    double volMax     = ui->volMaxSpin->value() / 100.0;
    double manualDlt  = ui->manualDeltaSpin->value() / 100.0;

    double micDb  = computeRmsDb(micBuf,  kSampleRate, winSec);
    double playDb = computeRmsDb(playBuf, kSampleRate, winSec);
    double curVol = getSinkVolume();

    // Отображение
    ui->micBar ->setValue(int(qBound(-90.0, micDb,  0.0)));
    ui->playBar->setValue(int(qBound(-90.0, playDb, 0.0)));
    ui->volBar ->setValue(int(curVol * 100));
    ui->micDbLabel ->setText(QString("%1 dB").arg(micDb,  0, 'f', 1));
    ui->playDbLabel->setText(QString("%1 dB").arg(playDb, 0, 'f', 1));
    ui->volLabel   ->setText(QString("%1 %").arg(curVol * 100, 0, 'f', 1));

    // ====== РЕЖИМ ФИКСАЦИИ ГРОМКОСТИ ======
    if (ui->lockVolumeCheck->isChecked()) {
        double wantedVol = ui->lockVolumeSpin->value() / 100.0;
        if (std::fabs(curVol - wantedVol) > 0.005) {   // > 0.5%
            setSinkVolume(wantedVol);
            lastSetVol = wantedVol;
            ui->statusLabel->setText(
                QString("🔒 Возврат к %1%").arg(wantedVol * 100, 0, 'f', 0));
            log(QString("Громкость изменилась на %1% — возвращаю к %2%")
                    .arg(curVol * 100, 0, 'f', 1)
                    .arg(wantedVol * 100, 0, 'f', 0));
        } else {
            ui->statusLabel->setText(
                QString("🔒 Зафиксировано на %1%").arg(wantedVol * 100, 0, 'f', 0));
        }
        justSetByMe = false;
        return;   // адаптивный алгоритм не работает в этом режиме
    }

    // ====== АДАПТИВНЫЙ РЕЖИМ ======
    // Ручная подстройка пользователем — только если изменение НЕ от программы
    if (!justSetByMe && std::fabs(curVol - lastSetVol) > manualDlt) {
        if (playDb > silenceDb) {
            targetDb = micDb;
            ui->targetDbSpin->setValue(targetDb);
            log(QString("Ручная подстройка: новая цель %1 dB")
                    .arg(targetDb, 0, 'f', 1));
        }
        lastSetVol = curVol;
    }
    justSetByMe = false;

    if (playDb < silenceDb) {
        ui->statusLabel->setText("Тишина");
        return;
    }

    double errDb     = targetDb - micDb;
    double ratio     = std::pow(10.0, errDb / 20.0);
    double targetVol = curVol * ratio;
    double newVol    = curVol + (targetVol - curVol) * smoothing;
    double delta     = newVol - curVol;
    if (std::fabs(delta) > maxStep)
        newVol = curVol + (delta > 0 ? maxStep : -maxStep);
    newVol = qBound(volMin, newVol, volMax);

    setSinkVolume(newVol);
    lastSetVol = newVol;

    ui->statusLabel->setText(QString("err=%1 dB").arg(errDb, 0, 'f', 1));
}

// ---------- калибровка ----------

void MainWindow::onCalibrateClicked() {
    QMessageBox::information(this, "Калибровка",
                             "Включите типичный контент на КОМФОРТНОЙ громкости и нажмите OK.\n"
                             "Не разговаривайте 5 секунд.");

    bool wasRunning = running;
    if (!wasRunning) {
        startCapture();
        // Прогреваем pipeline — крутим event loop ~700 мс
        QElapsedTimer warm; warm.start();
        while (warm.elapsed() < 700) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
        }
    }

    double winSec    = ui->sampleDurationSpin->value();
    double silenceDb = ui->silenceDbSpin->value();

    // Сбрасываем накопленное, чтобы замер был свежим
    micBuf.clear();
    playBuf.clear();

    QList<double> samples;
    for (int i = 0; i < 10; ++i) {
        // Ждём, пока в буферы натечёт хотя бы winSec секунд звука,
        // НЕ блокируя event loop
        int needBytes = int(kSampleRate * winSec) * 2;
        QElapsedTimer t; t.start();
        while ((micBuf.size() < needBytes || playBuf.size() < needBytes)
               && t.elapsed() < 3000) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 30);
        }

        double m = computeRmsDb(micBuf,  kSampleRate, winSec);
        double p = computeRmsDb(playBuf, kSampleRate, winSec);
        log(QString("calib %1: mic=%2 dB  play=%3 dB %4")
                .arg(i+1)
                .arg(m, 0, 'f', 1)
                .arg(p, 0, 'f', 1)
                .arg(p > silenceDb ? "✓" : "(тихо, пропуск)"));
        if (p > silenceDb) samples << m;
    }

    if (!wasRunning) stopCapture();

    if (samples.size() < 3) {
        QMessageBox::warning(this, "Калибровка",
                             QString("Из колонок почти ничего не играло (%1 из 10 годных).\n\n"
                                     "Проверьте:\n"
                                     "• звук действительно играет в Sink\n"
                                     "• Sink в форме = текущий выход системы\n"
                                     "• порог тишины (сейчас %2 dB) — попробуйте опустить до -65")
                                 .arg(samples.size()).arg(silenceDb));
        return;
    }

    std::sort(samples.begin(), samples.end());
    double median = samples[samples.size() / 2];
    targetDb = median;
    ui->targetDbSpin->setValue(targetDb);
    log(QString("Калибровка завершена: target = %1 dB (из %2 замеров)")
            .arg(targetDb, 0, 'f', 1).arg(samples.size()));
}

// ---------- сохранение настроек ----------

void MainWindow::onSaveSettings() {
    QSettings s;
    s.setValue("targetDb",       ui->targetDbSpin->value());
    s.setValue("volMin",         ui->volMinSpin->value());
    s.setValue("volMax",         ui->volMaxSpin->value());
    s.setValue("sampleDuration", ui->sampleDurationSpin->value());
    s.setValue("updateInterval", ui->updateIntervalSpin->value());
    s.setValue("silenceDb",      ui->silenceDbSpin->value());
    s.setValue("maxStep",        ui->maxStepSpin->value());
    s.setValue("smoothing",      ui->smoothingSpin->value());
    s.setValue("manualDelta",    ui->manualDeltaSpin->value());
    log("Настройки сохранены.");
    // в onSaveSettings()
    s.setValue("lockVolume",       ui->lockVolumeCheck->isChecked());
    s.setValue("lockVolumeValue",  ui->lockVolumeSpin->value());
}

void MainWindow::onLoadSettings() {
    QSettings s;
    ui->targetDbSpin      ->setValue(s.value("targetDb",      -25.0).toDouble());
    ui->volMinSpin        ->setValue(s.value("volMin",        5).toInt());
    ui->volMaxSpin        ->setValue(s.value("volMax",        80).toInt());
    ui->sampleDurationSpin->setValue(s.value("sampleDuration",0.4).toDouble());
    ui->updateIntervalSpin->setValue(s.value("updateInterval",0.5).toDouble());
    ui->silenceDbSpin     ->setValue(s.value("silenceDb",     -55).toInt());
    ui->maxStepSpin       ->setValue(s.value("maxStep",       2.0).toDouble());
    ui->smoothingSpin     ->setValue(s.value("smoothing",     0.35).toDouble());
    ui->manualDeltaSpin   ->setValue(s.value("manualDelta",   5.0).toDouble());
// в onLoadSettings()
    ui->lockVolumeCheck->setChecked(s.value("lockVolume", false).toBool());
    ui->lockVolumeSpin ->setValue  (s.value("lockVolumeValue", 29).toInt());
}