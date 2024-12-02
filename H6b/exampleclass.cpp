#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent) : QObject(parent)
{
    qDebug() << "Start";
    connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);
    qDebug() << "End";
}

void ExampleClass::startToWait()
{
    qDebug() << "Waiting for 1 second";
    QThread::msleep(1000);
    emit readyToSay();
    std::exit(0); //tämä oli ainoa tapa jolla sain ohjelman pysäytettyä suorituksen jälkeen return 0; lisäksi
}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}
