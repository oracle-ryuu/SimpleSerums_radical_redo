/********************************************************************************
** Form generated from reading UI file 'checkin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKIN_H
#define UI_CHECKIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkIn
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *checkIn)
    {
        if (checkIn->objectName().isEmpty())
            checkIn->setObjectName(QStringLiteral("checkIn"));
        checkIn->resize(400, 300);
        checkIn->setAutoFillBackground(false);
        checkIn->setStyleSheet(QLatin1String("background-image: url(:/bg4/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/BG3.png);\n"
"background-image: url(:/BGs/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/consult.png);"));
        label = new QLabel(checkIn);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 171, 17));
        label_2 = new QLabel(checkIn);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 120, 241, 17));
        lineEdit = new QLineEdit(checkIn);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 70, 181, 25));
        lineEdit_2 = new QLineEdit(checkIn);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 140, 181, 25));
        pushButton = new QPushButton(checkIn);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 190, 80, 25));
        pushButton_2 = new QPushButton(checkIn);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 190, 80, 25));

        retranslateUi(checkIn);

        QMetaObject::connectSlotsByName(checkIn);
    } // setupUi

    void retranslateUi(QWidget *checkIn)
    {
        checkIn->setWindowTitle(QApplication::translate("checkIn", "Cal Clinic: Check In", 0));
        label->setText(QApplication::translate("checkIn", "Enter Patient Name", 0));
        label_2->setText(QApplication::translate("checkIn", "Enter Patient Insurance Number", 0));
        pushButton->setText(QApplication::translate("checkIn", "Queue", 0));
        pushButton_2->setText(QApplication::translate("checkIn", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class checkIn: public Ui_checkIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKIN_H
