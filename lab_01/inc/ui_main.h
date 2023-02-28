/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *progInfo;
    QAction *authorInfo;
    QAction *action_4;
    QAction *openAction;
    QAction *saveAction;
    QAction *exitAction;
    QAction *inputInfo;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *kzBox;
    QLabel *label_7;
    QLabel *label_9;
    QDoubleSpinBox *kxBox;
    QLabel *label_8;
    QPushButton *scaleButton;
    QDoubleSpinBox *kyBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *xBox;
    QLabel *label_12;
    QDoubleSpinBox *zBox;
    QDoubleSpinBox *yBox;
    QLabel *label_11;
    QLabel *label_10;
    QPushButton *chooseButton;
    QPushButton *loadButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *dzBox;
    QDoubleSpinBox *dxBox;
    QLabel *label_3;
    QDoubleSpinBox *dyBox;
    QLabel *label;
    QPushButton *moveButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QDoubleSpinBox *yAngleBox;
    QLabel *label_6;
    QDoubleSpinBox *xAngleBox;
    QLabel *label_5;
    QDoubleSpinBox *zAngleBox;
    QPushButton *rotateButton;
    QWidget *widget;
    QPushButton *saveButton;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1352, 738);
        progInfo = new QAction(MainWindow);
        progInfo->setObjectName(QString::fromUtf8("progInfo"));
        authorInfo = new QAction(MainWindow);
        authorInfo->setObjectName(QString::fromUtf8("authorInfo"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QString::fromUtf8("openAction"));
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QString::fromUtf8("saveAction"));
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        inputInfo = new QAction(MainWindow);
        inputInfo->setObjectName(QString::fromUtf8("inputInfo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QFont font;
        font.setPointSize(15);
        groupBox_3->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(20);
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(20, 20, 20, 20);
        kzBox = new QDoubleSpinBox(groupBox_3);
        kzBox->setObjectName(QString::fromUtf8("kzBox"));
        kzBox->setMinimum(-1000.000000000000000);
        kzBox->setValue(0.000000000000000);

        gridLayout_3->addWidget(kzBox, 0, 7, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 0, 6, 1, 1);

        kxBox = new QDoubleSpinBox(groupBox_3);
        kxBox->setObjectName(QString::fromUtf8("kxBox"));
        kxBox->setMinimum(-1000.000000000000000);
        kxBox->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(kxBox, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 3, 1, 1);

        scaleButton = new QPushButton(groupBox_3);
        scaleButton->setObjectName(QString::fromUtf8("scaleButton"));
        scaleButton->setFont(font);

        gridLayout_3->addWidget(scaleButton, 1, 0, 1, 8);

        kyBox = new QDoubleSpinBox(groupBox_3);
        kyBox->setObjectName(QString::fromUtf8("kyBox"));
        kyBox->setMinimum(-1000.000000000000000);
        kyBox->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(kyBox, 0, 4, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 3, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        xBox = new QDoubleSpinBox(groupBox_4);
        xBox->setObjectName(QString::fromUtf8("xBox"));
        xBox->setMinimum(-1000.000000000000000);
        xBox->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(xBox, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 0, 6, 1, 1);

        zBox = new QDoubleSpinBox(groupBox_4);
        zBox->setObjectName(QString::fromUtf8("zBox"));
        zBox->setMinimum(-1000.000000000000000);
        zBox->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(zBox, 0, 7, 1, 1);

        yBox = new QDoubleSpinBox(groupBox_4);
        yBox->setObjectName(QString::fromUtf8("yBox"));
        yBox->setMinimum(-1000.000000000000000);
        yBox->setValue(0.000000000000000);

        gridLayout_5->addWidget(yBox, 0, 4, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 3, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        chooseButton = new QPushButton(groupBox_4);
        chooseButton->setObjectName(QString::fromUtf8("chooseButton"));

        gridLayout_5->addWidget(chooseButton, 1, 0, 1, 8);


        gridLayout_4->addWidget(groupBox_4, 0, 0, 1, 1);

        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setFont(font);

        gridLayout_4->addWidget(loadButton, 5, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(20, 20, 20, 20);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 3, 1, 1);

        dzBox = new QDoubleSpinBox(groupBox);
        dzBox->setObjectName(QString::fromUtf8("dzBox"));
        dzBox->setMinimum(-1000.000000000000000);
        dzBox->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(dzBox, 0, 7, 1, 1);

        dxBox = new QDoubleSpinBox(groupBox);
        dxBox->setObjectName(QString::fromUtf8("dxBox"));
        dxBox->setMinimum(-1000.000000000000000);
        dxBox->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(dxBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 6, 1, 1);

        dyBox = new QDoubleSpinBox(groupBox);
        dyBox->setObjectName(QString::fromUtf8("dyBox"));
        dyBox->setMinimum(-1000.000000000000000);
        dyBox->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(dyBox, 0, 4, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        moveButton = new QPushButton(groupBox);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        moveButton->setFont(font);

        gridLayout_2->addWidget(moveButton, 1, 0, 1, 8);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(20, 20, 20, 20);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        yAngleBox = new QDoubleSpinBox(groupBox_2);
        yAngleBox->setObjectName(QString::fromUtf8("yAngleBox"));
        yAngleBox->setMinimum(-1000.000000000000000);
        yAngleBox->setMaximum(1000.000000000000000);

        gridLayout->addWidget(yAngleBox, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        xAngleBox = new QDoubleSpinBox(groupBox_2);
        xAngleBox->setObjectName(QString::fromUtf8("xAngleBox"));
        xAngleBox->setMinimum(-1000.000000000000000);
        xAngleBox->setMaximum(1000.000000000000000);

        gridLayout->addWidget(xAngleBox, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        zAngleBox = new QDoubleSpinBox(groupBox_2);
        zAngleBox->setObjectName(QString::fromUtf8("zAngleBox"));
        zAngleBox->setMinimum(-1000.000000000000000);
        zAngleBox->setMaximum(1000.000000000000000);

        gridLayout->addWidget(zAngleBox, 0, 5, 1, 1);

        rotateButton = new QPushButton(groupBox_2);
        rotateButton->setObjectName(QString::fromUtf8("rotateButton"));
        rotateButton->setFont(font);

        gridLayout->addWidget(rotateButton, 1, 0, 1, 6);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMouseTracking(true);

        gridLayout_4->addWidget(widget, 0, 1, 6, 1);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setFont(font);

        gridLayout_4->addWidget(saveButton, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1352, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu->menuAction());
        menu->addAction(progInfo);
        menu->addAction(inputInfo);
        menu->addAction(authorInfo);
        menu->addSeparator();
        menu_2->addAction(openAction);
        menu_2->addAction(saveAction);
        menu_2->addSeparator();
        menu_2->addAction(exitAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        progInfo->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        authorInfo->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        openAction->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        openAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        saveAction->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        saveAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        exitAction->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        exitAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        inputInfo->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\262\321\205\320\276\320\264\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "kx:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "kz:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ky:", nullptr));
        scaleButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207\320\265\320\262\320\260\321\217 \321\202\320\276\321\207\320\272\320\260:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "z:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        chooseButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        loadButton->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\276\321\201:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "dy:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "dz:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "dx:", nullptr));
        moveButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "angle x:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "angle z:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "angle y:", nullptr));
        rotateButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
