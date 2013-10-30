#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}

void MainWindow::on_hwpush_clicked()
{
    std::cout<< "success" << std::endl;
}

void MainWindow::on_hwpush2_clicked()
{
    std::cout<< "successful" << std::endl;
}

