#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QMainWindow>

#include "proc.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

    private:

        void exitCommand();

        void saveCommand();

        void loadCommand();

        void moveCommand();

        void rotateCommand();
        
        void scaleCommand();

        bugT drawModelCommand();

        Ui::MainWindow *ui;

    public: 
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
};

#endif // __MAINWINDOW_H__