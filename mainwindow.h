// #ifndef MAINWINDOW_H
// #define MAINWINDOW_H

// #include <QMainWindow>

// QT_BEGIN_NAMESPACE
// namespace Ui {
// class MainWindow;
// }
// QT_END_NAMESPACE

// class MainWindow : public QMainWindow
// {
//     Q_OBJECT

// public:
//     explicit MainWindow(QWidget *parent = nullptr);
//     ~MainWindow() override;

// private:
//     Ui::MainWindow *ui;
// };
// #endif // MAINWINDOW_H
////////////////////////////////////////////////////////////////////
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QTimer>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onStartStopClicked();
    void onCalibrateClicked();
    void onRefreshDevicesClicked();
    void onSaveSettings();
    void onLoadSettings();
    void onTick();                       // основной цикл регулировки
    void readMicData();
    void readPlayData();

private:
    Ui::MainWindow *ui;

    // Процессы непрерывного захвата
    QProcess *micProc  = nullptr;        // parec с микрофона
    QProcess *playProc = nullptr;        // parec с .monitor
    QByteArray micBuf, playBuf;

    QTimer tickTimer;
    bool running = false;

    QString sinkName, sourceName, monitorName;
    double targetDb = -25.0;
    double lastSetVol = 0.3;

    // Утилиты
    QString runCmd(const QString &program, const QStringList &args);
    void setSinkVolume(double v);
    double getSinkVolume();
    void detectDevices();
    void startCapture();
    void stopCapture();
    double computeRmsDb(QByteArray &buf, int sampleRate, double windowSec);
    void log(const QString &msg);
     bool justSetByMe = false;   // флаг для отличия "программа поставила" от "пользователь крутанул"
};

#endif