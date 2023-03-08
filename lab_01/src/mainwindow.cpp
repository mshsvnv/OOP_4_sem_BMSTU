#include <iostream>

#include <QMessageBox>
#include <QFileDialog>
#include <QString>

#include "mainwindow.h"
#include "ui_main.h"

#include "proc.h"
#include "scene.h"
#include "bug.h"
#include "model.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);

    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    connect(ui->progInfo, &QAction::triggered, this, &MainWindow::showProgInfo);
    connect(ui->authorInfo, &QAction::triggered, this, &MainWindow::showAuthorInfo);
    connect(ui->inputInfo, &QAction::triggered, this, &MainWindow::showInputInfo);
    
    connect(ui->saveAction, &QAction::triggered, this, &MainWindow::saveCommand);
    connect(ui->loadAction, &QAction::triggered, this, &MainWindow::loadCommand);

    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::saveCommand);
    connect(ui->loadButton, &QPushButton::clicked, this, &MainWindow::loadCommand);

    connect(ui->moveButton, &QPushButton::clicked, this, &MainWindow::moveCommand);
    connect(ui->rotateButton, &QPushButton::clicked, this, &MainWindow::rotateCommand);
    connect(ui->scaleButton, &QPushButton::clicked, this, &MainWindow::scaleCommand);
}

MainWindow::~MainWindow(void) {
    delete ui;
}

void MainWindow::showProgInfo(void) {
    QMessageBox::about(this, "О программе", "3D viewer для поворота, масштабирования и перемещения каркасных моделей");
}

void MainWindow::showAuthorInfo(void) {
    QMessageBox::about(this, "Об авторе", "Савинова Мария ИУ7-41Б");
}

void MainWindow::showInputInfo(void) {
    QMessageBox::about(this, "О входных данных", "1. Кол-во точек\n2. Координаты x, y, z\n 3. Кол-во ребер\n 4. Связи между точками");
}

void MainWindow::saveCommand(void) {
    return;
}

void MainWindow::loadCommand(void) {

    bugT rc = OK;
    procT curProc;
    
    QString fileName = QFileDialog::getOpenFileName(this, "Выбрать файл", "./data"); 
    
    curProc.action = LOAD;
    strcpy(curProc.fileName, fileName.toStdString().c_str());

    rc = performProc(curProc);

    if (rc == OK) {
        rc = drawModelCommand();
    }
    else
        showBugMessage(rc);

    return;
}

void MainWindow::moveCommand(void) {

    bugT rc = OK;
    procT curProc;

    double dx = ui->dxBox->value();
    double dy = ui->dyBox->value();
    double dz = ui->dzBox->value();

    curProc.action = ROTATE;

    curProc.movement.dx = dx;
    curProc.movement.dy = dy;
    curProc.movement.dz = dz;

    rc = performProc(curProc);

    if (rc != OK)
        showBugMessage(rc);
    else
        rc = drawModelCommand();

    return;
}

void MainWindow::scaleCommand(void) {
    return;
}

void MainWindow::rotateCommand(void) {
    return;
}

bugT MainWindow::drawModelCommand(void) {

    sceneT curScene;
    procT curProc;

    curScene.scene = ui->graphicsView->scene();

    clearScene(curScene);

    curProc.action = DRAW;
    curProc.scene = curScene;

    return performProc(curProc);
}

