/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *ButtonFind;
    QLineEdit *cityWriter;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(860, 671);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ButtonFind = new QPushButton(centralwidget);
        ButtonFind->setObjectName("ButtonFind");
        ButtonFind->setGeometry(QRect(230, 540, 381, 71));
        ButtonFind->setStyleSheet(QString::fromUtf8("font: 36pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69))"));
        cityWriter = new QLineEdit(centralwidget);
        cityWriter->setObjectName("cityWriter");
        cityWriter->setGeometry(QRect(230, 490, 381, 41));
        QFont font;
        font.setPointSize(12);
        cityWriter->setFont(font);
        cityWriter->setCursor(QCursor(Qt::CursorShape::SizeVerCursor));
        cityWriter->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        cityWriter->setAutoFillBackground(false);
        cityWriter->setStyleSheet(QString::fromUtf8("border-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 39, 811, 421));
        label->setStyleSheet(QString::fromUtf8("color: rgb(162, 222, 255);\n"
"font: 18pt \"Segoe UI\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 860, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ButtonFind->setText(QCoreApplication::translate("MainWindow", "\320\235\320\220\320\231\320\242\320\230", nullptr));
        cityWriter->setText(QString());
        cityWriter->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\222\320\225\320\224\320\230\320\242\320\225 \320\223\320\236\320\240\320\236\320\224", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
