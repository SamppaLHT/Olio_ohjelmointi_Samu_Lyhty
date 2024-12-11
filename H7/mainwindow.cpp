#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set default values
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");

    // Connect signals to slots
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::buttonCounter);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::buttonReset);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonCounter()
{
    counter++;
    QString countStr = QString::number(counter);
    ui->txtResult->setText(countStr);
    ui->labelInfo->setText("Painiketta painettu " + countStr + " kertaa");
}

void MainWindow::buttonReset()
{
    counter = 0;
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
}
