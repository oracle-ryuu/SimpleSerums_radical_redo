/********************************************************************************
** Form generated from reading UI file 'removeinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEINVENTORY_H
#define UI_REMOVEINVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removeInventory
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSplitter *splitter_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *removeInventory)
    {
        if (removeInventory->objectName().isEmpty())
            removeInventory->setObjectName(QStringLiteral("removeInventory"));
        removeInventory->resize(400, 300);
        removeInventory->setStyleSheet(QStringLiteral("background-image: url(:/green/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/BG5.png);"));
        pushButton = new QPushButton(removeInventory);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 160, 80, 25));
        pushButton_2 = new QPushButton(removeInventory);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 160, 80, 25));
        splitter_2 = new QSplitter(removeInventory);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(130, 90, 108, 38));
        splitter_2->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        splitter_2->addWidget(label);
        lineEdit = new QLineEdit(splitter_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        splitter_2->addWidget(lineEdit);

        retranslateUi(removeInventory);

        QMetaObject::connectSlotsByName(removeInventory);
    } // setupUi

    void retranslateUi(QWidget *removeInventory)
    {
        removeInventory->setWindowTitle(QApplication::translate("removeInventory", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("removeInventory", "Remove", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("removeInventory", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("removeInventory", "Enter Item ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class removeInventory: public Ui_removeInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEINVENTORY_H
