/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGuardar;
    QAction *actionAbrir;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QSpinBox *Id;
    QDoubleSpinBox *Voltaj;
    QSpinBox *PosicionX;
    QSpinBox *PosicionY;
    QSpinBox *Green;
    QSpinBox *Red;
    QSpinBox *Blue;
    QPushButton *pushButton;
    QLabel *Res;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 70, 461, 391));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 120, 108, 24));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 160, 108, 24));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(20, 200, 108, 24));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(20, 30, 108, 24));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(20, 240, 108, 24));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(20, 70, 108, 24));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(20, 280, 108, 24));
        Id = new QSpinBox(groupBox);
        Id->setObjectName("Id");
        Id->setGeometry(QRect(180, 30, 42, 25));
        Voltaj = new QDoubleSpinBox(groupBox);
        Voltaj->setObjectName("Voltaj");
        Voltaj->setGeometry(QRect(170, 70, 62, 25));
        PosicionX = new QSpinBox(groupBox);
        PosicionX->setObjectName("PosicionX");
        PosicionX->setGeometry(QRect(180, 120, 42, 25));
        PosicionY = new QSpinBox(groupBox);
        PosicionY->setObjectName("PosicionY");
        PosicionY->setGeometry(QRect(180, 160, 42, 25));
        Green = new QSpinBox(groupBox);
        Green->setObjectName("Green");
        Green->setGeometry(QRect(180, 200, 42, 25));
        Red = new QSpinBox(groupBox);
        Red->setObjectName("Red");
        Red->setGeometry(QRect(180, 240, 42, 25));
        Blue = new QSpinBox(groupBox);
        Blue->setObjectName("Blue");
        Blue->setGeometry(QRect(180, 280, 42, 25));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 350, 80, 24));
        Res = new QLabel(groupBox);
        Res->setObjectName("Res");
        Res->setGeometry(QRect(280, 40, 141, 261));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionAbrir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Neurona", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Posicion X", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "Posicion Y", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Capturar", nullptr));
        Res->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
