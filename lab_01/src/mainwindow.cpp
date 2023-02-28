#include <iostream>

#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <QDebug>

#include "mainwindow.h"
#include "ui_main.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);

    connect(ui->progInfo, &QAction::triggered, this, &MainWindow::showProgInfo);
    connect(ui->authorInfo, &QAction::triggered, this, &MainWindow::showAuthorInfo);
    connect(ui->inputInfo, &QAction::triggered, this, &MainWindow::showInputInfo);
    
    connect(ui->openAction, &QAction::triggered, this, &MainWindow::openCommand);
    connect(ui->saveAction, &QAction::triggered, this, &MainWindow::saveCommand);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::showProgInfo() {
    QMessageBox::about(this, "О программе", "3D viewer для поворота, масштабирования и перемещения каркасных моделей");
}

void MainWindow::showAuthorInfo() {
    QMessageBox::about(this, "Об авторе", "Савинова Мария ИУ7-41Б");
}

void MainWindow::showInputInfo() {
    QMessageBox::about(this, "О входных данных", "1. Кол-во точек\n2. Координаты x, y, z\n 3. Кол-во ребер\n 4. Связи между точками");
}

void MainWindow::saveCommand() {
}

void MainWindow::openCommand() {
    QString fileName = QFileDialog::getOpenFileName(this, "Выбрать файл", "./data"); 
    qDebug() << fileName;
}  
