/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLineEdit *sinkEdit;
    QLineEdit *sourceEdit;
    QLineEdit *monitorEdit;
    QPushButton *btnRefresh;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QDoubleSpinBox *targetDbSpin;
    QSpinBox *volMinSpin;
    QSpinBox *volMaxSpin;
    QDoubleSpinBox *sampleDurationSpin;
    QDoubleSpinBox *updateIntervalSpin;
    QSpinBox *silenceDbSpin;
    QDoubleSpinBox *maxStepSpin;
    QDoubleSpinBox *smoothingSpin;
    QDoubleSpinBox *manualDeltaSpin;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_18;
    QCheckBox *lockVolumeCheck;
    QSpinBox *lockVolumeSpin;
    QGroupBox *groupBox_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QProgressBar *micBar;
    QProgressBar *playBar;
    QProgressBar *volBar;
    QLabel *micDbLabel;
    QLabel *playDbLabel;
    QLabel *volLabel;
    QLabel *statusLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStartStop;
    QPushButton *btnCalibrate;
    QPushButton *btnSave;
    QPushButton *btnLoad;
    QPlainTextEdit *logView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1726, 960);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 20, 141, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(250, 20, 481, 201));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(132, 243, 163, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(248, 255, 250, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(190, 249, 206, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(66, 121, 82, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(88, 162, 109, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        QBrush brush7(QColor(193, 249, 209, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush10(QColor(66, 121, 82, 127));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(199, 255, 215, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush11);
#endif
        groupBox->setPalette(palette);
        groupBox->setAutoFillBackground(false);
        groupBox->setFlat(false);
        sinkEdit = new QLineEdit(groupBox);
        sinkEdit->setObjectName("sinkEdit");
        sinkEdit->setGeometry(QRect(90, 30, 361, 25));
        sinkEdit->setReadOnly(true);
        sourceEdit = new QLineEdit(groupBox);
        sourceEdit->setObjectName("sourceEdit");
        sourceEdit->setGeometry(QRect(90, 70, 361, 25));
        sourceEdit->setReadOnly(true);
        monitorEdit = new QLineEdit(groupBox);
        monitorEdit->setObjectName("monitorEdit");
        monitorEdit->setGeometry(QRect(90, 110, 351, 25));
        monitorEdit->setReadOnly(true);
        btnRefresh = new QPushButton(groupBox);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setGeometry(QRect(200, 150, 81, 25));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 30, 71, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 80, 54, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 120, 54, 17));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(770, 30, 601, 621));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush);
        QBrush brush12(QColor(127, 127, 127, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush12);
        QBrush brush13(QColor(170, 170, 170, 255));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush13);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush12);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush13);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush13);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush14(QColor(127, 127, 127, 127));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush14);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush);
#endif
        groupBox_2->setPalette(palette1);
        targetDbSpin = new QDoubleSpinBox(groupBox_2);
        targetDbSpin->setObjectName("targetDbSpin");
        targetDbSpin->setGeometry(QRect(270, 30, 161, 26));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        targetDbSpin->setPalette(palette2);
        targetDbSpin->setMinimum(-90.000000000000000);
        targetDbSpin->setMaximum(0.000000000000000);
        targetDbSpin->setSingleStep(0.500000000000000);
        targetDbSpin->setValue(-25.000000000000000);
        volMinSpin = new QSpinBox(groupBox_2);
        volMinSpin->setObjectName("volMinSpin");
        volMinSpin->setGeometry(QRect(340, 80, 42, 26));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        volMinSpin->setPalette(palette3);
        volMinSpin->setMaximum(100);
        volMinSpin->setValue(5);
        volMaxSpin = new QSpinBox(groupBox_2);
        volMaxSpin->setObjectName("volMaxSpin");
        volMaxSpin->setGeometry(QRect(340, 120, 42, 26));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        volMaxSpin->setPalette(palette4);
        volMaxSpin->setMaximum(100);
        volMaxSpin->setValue(80);
        sampleDurationSpin = new QDoubleSpinBox(groupBox_2);
        sampleDurationSpin->setObjectName("sampleDurationSpin");
        sampleDurationSpin->setGeometry(QRect(340, 170, 62, 26));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        sampleDurationSpin->setPalette(palette5);
        sampleDurationSpin->setMinimum(0.100000000000000);
        sampleDurationSpin->setMaximum(2.000000000000000);
        sampleDurationSpin->setSingleStep(0.100000000000000);
        sampleDurationSpin->setValue(0.400000000000000);
        updateIntervalSpin = new QDoubleSpinBox(groupBox_2);
        updateIntervalSpin->setObjectName("updateIntervalSpin");
        updateIntervalSpin->setGeometry(QRect(340, 210, 62, 26));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        updateIntervalSpin->setPalette(palette6);
        updateIntervalSpin->setMinimum(0.100000000000000);
        updateIntervalSpin->setMaximum(5.000000000000000);
        updateIntervalSpin->setSingleStep(0.100000000000000);
        updateIntervalSpin->setValue(0.500000000000000);
        silenceDbSpin = new QSpinBox(groupBox_2);
        silenceDbSpin->setObjectName("silenceDbSpin");
        silenceDbSpin->setGeometry(QRect(340, 260, 42, 26));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        silenceDbSpin->setPalette(palette7);
        silenceDbSpin->setMinimum(-90);
        silenceDbSpin->setMaximum(0);
        silenceDbSpin->setValue(-55);
        maxStepSpin = new QDoubleSpinBox(groupBox_2);
        maxStepSpin->setObjectName("maxStepSpin");
        maxStepSpin->setGeometry(QRect(340, 310, 62, 26));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        maxStepSpin->setPalette(palette8);
        maxStepSpin->setMinimum(0.100000000000000);
        maxStepSpin->setMaximum(20.000000000000000);
        maxStepSpin->setSingleStep(0.500000000000000);
        maxStepSpin->setValue(2.000000000000000);
        smoothingSpin = new QDoubleSpinBox(groupBox_2);
        smoothingSpin->setObjectName("smoothingSpin");
        smoothingSpin->setGeometry(QRect(340, 360, 62, 26));
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        smoothingSpin->setPalette(palette9);
        smoothingSpin->setMinimum(0.010000000000000);
        smoothingSpin->setMaximum(1.000000000000000);
        smoothingSpin->setSingleStep(0.050000000000000);
        smoothingSpin->setValue(0.350000000000000);
        manualDeltaSpin = new QDoubleSpinBox(groupBox_2);
        manualDeltaSpin->setObjectName("manualDeltaSpin");
        manualDeltaSpin->setGeometry(QRect(330, 400, 62, 26));
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        manualDeltaSpin->setPalette(palette10);
        manualDeltaSpin->setMinimum(1.000000000000000);
        manualDeltaSpin->setMaximum(50.000000000000000);
        manualDeltaSpin->setValue(5.000000000000000);
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 37, 141, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 90, 121, 17));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 130, 121, 17));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 170, 171, 20));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(150, 210, 171, 20));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(163, 260, 131, 20));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(153, 310, 141, 20));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(180, 360, 121, 20));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(120, 410, 201, 20));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(100, 500, 161, 17));
        lockVolumeCheck = new QCheckBox(groupBox_2);
        lockVolumeCheck->setObjectName("lockVolumeCheck");
        lockVolumeCheck->setGeometry(QRect(300, 460, 211, 22));
        lockVolumeSpin = new QSpinBox(groupBox_2);
        lockVolumeSpin->setObjectName("lockVolumeSpin");
        lockVolumeSpin->setGeometry(QRect(280, 500, 42, 26));
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        lockVolumeSpin->setPalette(palette11);
        lockVolumeSpin->setMaximum(100);
        lockVolumeSpin->setSingleStep(1);
        lockVolumeSpin->setValue(29);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(60, 230, 651, 401));
        QPalette palette12;
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush15(QColor(255, 170, 0, 255));
        brush15.setStyle(Qt::BrushStyle::SolidPattern);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush15);
        QBrush brush16(QColor(255, 212, 127, 255));
        brush16.setStyle(Qt::BrushStyle::SolidPattern);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush16);
        QBrush brush17(QColor(255, 191, 63, 255));
        brush17.setStyle(Qt::BrushStyle::SolidPattern);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush17);
        QBrush brush18(QColor(127, 85, 0, 255));
        brush18.setStyle(Qt::BrushStyle::SolidPattern);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush18);
        QBrush brush19(QColor(170, 113, 0, 255));
        brush19.setStyle(Qt::BrushStyle::SolidPattern);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush19);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush16);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush16);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush17);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush18);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush19);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush16);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush18);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush16);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush17);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush18);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush19);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush18);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush18);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush20(QColor(127, 85, 0, 127));
        brush20.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush20);
#endif
        QBrush brush21(QColor(255, 195, 76, 255));
        brush21.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush21);
#endif
        groupBox_3->setPalette(palette12);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 50, 101, 17));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(50, 150, 131, 17));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 250, 121, 17));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(50, 360, 121, 17));
        micBar = new QProgressBar(groupBox_3);
        micBar->setObjectName("micBar");
        micBar->setGeometry(QRect(170, 40, 118, 23));
        micBar->setMinimum(-90);
        micBar->setMaximum(0);
        micBar->setValue(0);
        playBar = new QProgressBar(groupBox_3);
        playBar->setObjectName("playBar");
        playBar->setGeometry(QRect(180, 140, 118, 23));
        playBar->setMinimum(-90);
        playBar->setMaximum(0);
        playBar->setValue(-91);
        volBar = new QProgressBar(groupBox_3);
        volBar->setObjectName("volBar");
        volBar->setGeometry(QRect(160, 250, 118, 23));
        volBar->setValue(24);
        micDbLabel = new QLabel(groupBox_3);
        micDbLabel->setObjectName("micDbLabel");
        micDbLabel->setGeometry(QRect(60, 80, 54, 17));
        playDbLabel = new QLabel(groupBox_3);
        playDbLabel->setObjectName("playDbLabel");
        playDbLabel->setGeometry(QRect(70, 170, 54, 17));
        volLabel = new QLabel(groupBox_3);
        volLabel->setObjectName("volLabel");
        volLabel->setGeometry(QRect(80, 280, 54, 17));
        statusLabel = new QLabel(groupBox_3);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(140, 360, 441, 17));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(100, 680, 611, 171));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnStartStop = new QPushButton(horizontalLayoutWidget);
        btnStartStop->setObjectName("btnStartStop");

        horizontalLayout->addWidget(btnStartStop);

        btnCalibrate = new QPushButton(horizontalLayoutWidget);
        btnCalibrate->setObjectName("btnCalibrate");

        horizontalLayout->addWidget(btnCalibrate);

        btnSave = new QPushButton(horizontalLayoutWidget);
        btnSave->setObjectName("btnSave");

        horizontalLayout->addWidget(btnSave);

        btnLoad = new QPushButton(horizontalLayoutWidget);
        btnLoad->setObjectName("btnLoad");

        horizontalLayout->addWidget(btnLoad);

        logView = new QPlainTextEdit(centralwidget);
        logView->setObjectName("logView");
        logView->setGeometry(QRect(770, 680, 921, 231));
        logView->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1726, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        btnRefresh->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sink:", "Sink:"));
        label_3->setText(QCoreApplication::translate("MainWindow", "Source:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Monitor", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        targetDbSpin->setSpecialValueText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\273\320\265\320\262\320\276\320\271 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 (dB)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\273\320\265\320\262\320\276\320\271 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 (dB)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\276\320\274\320\272\320\276\321\201\321\202\321\214 min (%)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\276\320\274\320\272\320\276\321\201\321\202\321\214 max (%)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\267\320\260\320\274\320\265\321\200\320\260 (\321\201)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217 (\321\201)", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\200\320\276\320\263 \321\202\320\270\321\210\320\270\320\275\321\213 (dB)", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201 \321\210\320\260\320\263 \320\267\320\260 \321\202\320\270\320\272 (%)", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\273\320\260\320\266\320\270\320\262\320\260\320\275\320\270\320\265 (0\342\200\2461)", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\273\321\214\321\202\320\260 \321\200\321\203\321\207\320\275\320\276\320\271 \320\277\320\276\320\264\321\201\321\202\321\200\320\276\320\271\320\272\320\270 (%)", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\226\320\265\320\273\320\260\320\265\320\274\320\260\321\217 \320\263\321\200\320\276\320\274\320\272\320\276\321\201\321\202\321\214 (%)", nullptr));
        lockVolumeCheck->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\263\321\200\320\276\320\274\320\272\320\276\321\201\321\202\321\214", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\272\321\200\320\276\321\204\320\276\320\275", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\276\320\275\320\272\320\270 (monitor)", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\276\320\274\320\272\320\276\321\201\321\202\321\214 sink", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        micDbLabel->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        playDbLabel->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        volLabel->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        btnStartStop->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        btnCalibrate->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\270\320\261\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        btnLoad->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
