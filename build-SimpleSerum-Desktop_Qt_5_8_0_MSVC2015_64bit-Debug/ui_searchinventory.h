/********************************************************************************
** Form generated from reading UI file 'searchinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHINVENTORY_H
#define UI_SEARCHINVENTORY_H

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

class Ui_searchInventory
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSplitter *splitter_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *searchInventory)
    {
        if (searchInventory->objectName().isEmpty())
            searchInventory->setObjectName(QStringLiteral("searchInventory"));
        searchInventory->resize(400, 300);
        pushButton_2 = new QPushButton(searchInventory);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 150, 80, 25));
        pushButton = new QPushButton(searchInventory);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 150, 80, 25));
        splitter_2 = new QSplitter(searchInventory);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(130, 80, 108, 41));
        splitter_2->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        splitter_2->addWidget(label);
        lineEdit = new QLineEdit(splitter_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        splitter_2->addWidget(lineEdit);
        splitter_2->raise();
        pushButton_2->raise();
        pushButton->raise();

        retranslateUi(searchInventory);

        QMetaObject::connectSlotsByName(searchInventory);
    } // setupUi

    void retranslateUi(QWidget *searchInventory)
    {
        searchInventory->setWindowTitle(QApplication::translate("searchInventory", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("searchInventory", "Cancel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("searchInventory", "Search", Q_NULLPTR));
        label->setText(QApplication::translate("searchInventory", "Enter Item ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class searchInventory: public Ui_searchInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHINVENTORY_H
