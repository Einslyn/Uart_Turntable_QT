/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Jun 13 19:06:42 2020
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *OpenSerialPort;
    QLineEdit *SerialPort;
    QLabel *label;
    QPushButton *SerialSend;
    QLineEdit *serialString;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *stopRotate;
    QPushButton *serialSpeedDown;
    QPushButton *serialSpeedUp;
    QPushButton *serialMute;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(468, 224);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        OpenSerialPort = new QPushButton(centralWidget);
        OpenSerialPort->setObjectName(QString::fromUtf8("OpenSerialPort"));
        OpenSerialPort->setGeometry(QRect(200, 10, 75, 23));
        SerialPort = new QLineEdit(centralWidget);
        SerialPort->setObjectName(QString::fromUtf8("SerialPort"));
        SerialPort->setGeometry(QRect(90, 10, 91, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 61, 16));
        SerialSend = new QPushButton(centralWidget);
        SerialSend->setObjectName(QString::fromUtf8("SerialSend"));
        SerialSend->setGeometry(QRect(280, 50, 75, 23));
        serialString = new QLineEdit(centralWidget);
        serialString->setObjectName(QString::fromUtf8("serialString"));
        serialString->setGeometry(QRect(90, 50, 181, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 54, 12));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 10, 75, 23));
        stopRotate = new QPushButton(centralWidget);
        stopRotate->setObjectName(QString::fromUtf8("stopRotate"));
        stopRotate->setGeometry(QRect(380, 50, 75, 23));
        serialSpeedDown = new QPushButton(centralWidget);
        serialSpeedDown->setObjectName(QString::fromUtf8("serialSpeedDown"));
        serialSpeedDown->setGeometry(QRect(90, 110, 75, 23));
        serialSpeedUp = new QPushButton(centralWidget);
        serialSpeedUp->setObjectName(QString::fromUtf8("serialSpeedUp"));
        serialSpeedUp->setGeometry(QRect(300, 110, 75, 23));
        serialMute = new QPushButton(centralWidget);
        serialMute->setObjectName(QString::fromUtf8("serialMute"));
        serialMute->setGeometry(QRect(290, 10, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 468, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        OpenSerialPort->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        SerialPort->setText(QApplication::translate("MainWindow", "COM3", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "SerialPort", 0, QApplication::UnicodeUTF8));
        SerialSend->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        serialString->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>CT + START(Direction, Model, Auto Shutter, Degree, PauseTime, RepeatTimes);</p><p>| | |</p><p>Direction:  0:Left  1:Right </p><p>Model:      0:Continue 1:Intermittent 2:Swing</p><p>Auto Shutter:  1:Yes  0:No</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        serialString->setText(QApplication::translate("MainWindow", "CT+START(0,1,0,45,4,1);", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Comand", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "TOZERO", 0, QApplication::UnicodeUTF8));
        stopRotate->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        serialSpeedDown->setText(QApplication::translate("MainWindow", "SpeedDown", 0, QApplication::UnicodeUTF8));
        serialSpeedUp->setText(QApplication::translate("MainWindow", "SpeedUp", 0, QApplication::UnicodeUTF8));
        serialMute->setText(QApplication::translate("MainWindow", "Sound", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
