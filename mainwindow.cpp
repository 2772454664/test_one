#include "mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    const QByteArray id("org.ukui.liyanda.settings");
    gsetting =new QGSettings(id);

    connect(gsetting,&QGSettings::changed,this,[](const QString &key)
    {
        if(key=="dadada")
        {
            qDebug()<<"***********";
        }
    });

    gsetting->get("dadada");

    gsetting->set("dadada",999999999);

}

MainWindow::~MainWindow()
{

}
