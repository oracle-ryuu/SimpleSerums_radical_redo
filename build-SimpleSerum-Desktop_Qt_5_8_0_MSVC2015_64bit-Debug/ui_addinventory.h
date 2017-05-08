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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addInventory
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_increase;
    QPushButton *pushButton_decrease;

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
        verticalLayoutWidget = new QWidget(addInventory);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(120, 10, 160, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        pushButton_increase = new QPushButton(addInventory);
        pushButton_increase->setObjectName(QStringLiteral("pushButton_increase"));
        pushButton_increase->setGeometry(QRect(58, 230, 131, 25));
        pushButton_decrease = new QPushButton(addInventory);
        pushButton_decrease->setObjectName(QStringLiteral("pushButton_decrease"));
        pushButton_decrease->setGeometry(QRect(210, 230, 141, 25));

        retranslateUi(addInventory);

        QMetaObject::connectSlotsByName(addInventory);
    } // setupUi

    void retranslateUi(QWidget *addInventory)
    {
        addInventory->setWindowTitle(QApplication::translate("addInventory", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("addInventory", "Add New", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("addInventory", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("addInventory", "Enter Item ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("addInventory", "Enter Item Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("addInventory", "Enter Item Quantity", Q_NULLPTR));
        pushButton_increase->setText(QApplication::translate("addInventory", "Increase existing", Q_NULLPTR));
        pushButton_decrease->setText(QApplication::translate("addInventory", "Decrease Existing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addInventory: public Ui_addInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINVENTORY_H
