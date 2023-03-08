#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QMainWindow>

#include "proc.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

    public: 
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private:
        void showProgInfo();

        void showAuthorInfo();

        void showInputInfo();

        void saveCommand();

        void loadCommand();

        void moveCommand();

        void rotateCommand();
        
        void scaleCommand();

        bugT drawModelCommand();

    private:
        Ui::MainWindow *ui;
};

#endif // __MAINWINDOW_H__