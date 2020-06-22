#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "WzSerialPort.h"

WzSerialPort serial;
//int serial_status = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

#if defined(_WIN32)
    ui->SerialPort->setText("COM3");
#else
    ui->SerialPort->setText("/dev/ttyUSB0");
#endif

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OpenSerialPort_clicked()
{
    QPalette pal = ui->OpenSerialPort->palette();

#if defined(_WIN32)
    char portname[64] = "COM3";
#else
    char portname[64] = "/dev/ttyUSB0";
#endif

    QString strTxtEdt = ui->SerialPort->text();
    QByteArray ba = strTxtEdt.toLatin1();
    memcpy(portname,ba.data(),5);

    if(0 == serial.serial_status)
    {
        if (serial.open(portname, 115200, 0, 8, 1))
        {
            serial.serial_status = 1;
            // update UI
            pal.setColor(QPalette::ButtonText, Qt::green);
            ui->OpenSerialPort->setPalette(pal);
        }
    }
    else {
        serial.close();
        serial.serial_status = 0;

        // update UI
        pal = ui->OpenSerialPort->palette();
        pal.setColor(QPalette::ButtonText, Qt::red);
        ui->OpenSerialPort->setPalette(pal);
    }
}

void MainWindow::on_SerialSend_clicked()
{
    // turn lift  the turntable 45 degrees once.
   char sendData[128] = "CT+START(0,1,0,45,4,1);";
   QString strTxtEdt = ui->serialString->text();
   QByteArray ba = strTxtEdt.toLatin1();
   memcpy(sendData,ba.data(),128);

   serial.send(sendData,24);
}

void MainWindow::on_pushButton_clicked()
{
    // turn the turntable to the original point
    char data[] = "CT+TOZERO();";
    serial.send(data,32);
}

void MainWindow::on_stopRotate_clicked()
{
        ui->stopRotate->setStyleSheet("QPushButton{background-color:black;\
                     color: white;   border-radius: 10px;  border: 2px groove gray;border-style: outset;}"
                    "QPushButton:hover{background-color:white; color: black;}"
                "QPushButton:pressed{background-color:rgb(85, 170, 255);border-style: inset; }"
                       );

    // stop the turntable
    char data[] = "CT+SETSTOP();";
    serial.send(data,13);
}

void MainWindow::on_serialMute_clicked()
{
    QPalette pal = ui->serialMute->palette();

    // the turntable start/stop sound
    if(0 == serial.soundMute_status)
    {
        serial.send("CT+SPKMUTE(1);",15);
        serial.soundMute_status = 1;
        // update UI
        pal.setColor(QPalette::ButtonText, Qt::gray);
        ui->serialMute->setPalette(pal);
    }
    else {
        serial.send("CT+SPKMUTE(0);",15);
        serial.soundMute_status = 0;
        // update UI
        pal.setColor(QPalette::ButtonText, Qt::blue);
        ui->serialMute->setPalette(pal);
    }

}

void MainWindow::on_serialSpeedDown_clicked()
{
    // speed down the turntable
    char data[] = "CT+CHANGESPEED(0);";
    serial.send(data,32);
}

void MainWindow::on_serialSpeedUp_clicked()
{
    // speed up the turntable
    char data[] = "CT+CHANGESPEED(1);";
    serial.send(data,32);
}
