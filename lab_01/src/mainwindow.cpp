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
#include "info.h"
#include "file.h"

// ${workspaceFolder}/**
// /usr/include/x86_64-linux-gnu/qt5/
// /usr/include/x86_64-linux-gnu/qt5/QtWidgets
// /usr/include/x86_64-linux-gnu/qt5/QtCore

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);

    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    
    ui->graphicsView->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    scene->setSceneRect(0, 0, 1, 1);

    connect(ui->progInfo, &QAction::triggered, this, showProgInfo);
    connect(ui->authorInfo, &QAction::triggered, this, showAuthorInfo);
    connect(ui->inputInfo, &QAction::triggered, this, showInputInfo);
    connect(ui->toolButton, &QPushButton::clicked, this, showKeyInfo);
    
    connect(ui->loadAction, &QAction::triggered, this, &MainWindow::loadCommand);
    connect(ui->exitAction, &QAction::triggered, this, &MainWindow::exitCommand);

    connect(ui->loadButton, &QPushButton::clicked, this, &MainWindow::loadCommand);
    connect(ui->moveButton, &QPushButton::clicked, this, &MainWindow::moveCommand);
    connect(ui->rotateButton, &QPushButton::clicked, this, &MainWindow::rotateCommand);
    connect(ui->scaleButton, &QPushButton::clicked, this, &MainWindow::scaleCommand);
}   


MainWindow::~MainWindow(void) {
    delete ui;
}

void MainWindow::exitCommand(void) {

    bugT rc = OK;
    procT curProc;

    curProc.action = DELETE;

    rc = performProc(curProc);

    exit(rc);
}

void MainWindow::loadCommand(void) {

    bugT rc = OK;
    procT curProc;
    char curFileName[MAX_NAME_LEN];
    
    QString fileName = QFileDialog::getOpenFileName(this, "Выбрать файл", "./data"); 
    strcpy(curFileName, fileName.toStdString().c_str());
    
    rc = checkValidFile(curFileName);

    if (rc == OK) {
        strcpy(curProc.fileName, curFileName);
        curProc.action = LOAD;
    
        rc = performProc(curProc);
    }

    if (rc == OK)
        rc = drawModelCommand();
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

    curProc.action = MOVE;

    curProc.movement = {dx, dy, dz};

    rc = performProc(curProc);

    if (rc != OK)
        showBugMessage(rc);
    else
        rc = drawModelCommand();

    return;
}

void MainWindow::scaleCommand(void) {

    bugT rc = OK;
    procT curProc;

    double x = ui->xBox->value();
    double y = ui->yBox->value();
    double z = ui->zBox->value();

    double kx = ui->kxBox->value();
    double ky = ui->kyBox->value();
    double kz = ui->kzBox->value();

    curProc.action = SCALE;

    curProc.scale = {{kx, ky, kz}, x, y, z};

    checkScale(curProc.scale);

    rc = performProc(curProc);

    if (rc != OK)
        showBugMessage(rc);
    else
        rc = drawModelCommand();

    return;
}

void MainWindow::rotateCommand(void) {

    bugT rc = OK;
    procT curProc;

    double x = ui->xBox->value();
    double y = ui->yBox->value();
    double z = ui->zBox->value();

    double oX = ui->xAngleBox->value();
    double oY = ui->yAngleBox->value();
    double oZ = ui->zAngleBox->value();

    curProc.action = ROTATE;

    curProc.rotation = {{x, y, z}, oX, oY, oZ};

    rc = performProc(curProc);

    if (rc != OK)
        showBugMessage(rc);
    else
        rc = drawModelCommand();

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

