/********************************************************************************
** Form generated from reading UI file 'addinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINVENTORY_H
#define UI_ADDINVENTORY_H

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

class Ui_addInventory
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *addInventory)
    {
        if (addInventory->objectName().isEmpty())
            addInventory->setObjectName(QStringLiteral("addInventory"));
        addInventory->resize(400, 300);
        pushButton = new QPushButton(addInventory);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 190, 80, 25));
        pushButton_2 = new QPushButton(addInventory);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 190, 80, 25));
        label_2 = new QLabel(addInventory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 125, 113, 17));
        lineEdit_3 = new QLineEdit(addInventory);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 146, 111, 21));
        label = new QLabel(addInventory);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 40, 76, 17));
        lineEdit = new QLineEdit(addInventory);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 60, 113, 17));
        label_3 = new QLabel(addInventory);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 82, 97, 17));
        lineEdit_2 = new QLineEdit(addInventory);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 103, 113, 17));

        retranslateUi(addInventory);

        QMetaObject::connectSlotsByName(addInventory);
    } // setupUi

    void retranslateUi(QWidget *addInventory)
    {
        addInventory->setWindowTitle(QApplication::translate("addInventory", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("addInventory", "Add", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("addInventory", "Cancel", Q_NULLPTR));
        label_2->setText(QApplication::translate("addInventory", "Enter Item Quantity", Q_NULLPTR));
        label->setText(QApplication::translate("addInventory", "Enter Item ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("addInventory", "Enter Item Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addInventory: public Ui_addInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINVENTORY_H
