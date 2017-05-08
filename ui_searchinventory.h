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
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QLabel *label_3;

    void setupUi(QWidget *searchInventory)
    {
        if (searchInventory->objectName().isEmpty())
            searchInventory->setObjectName(QStringLiteral("searchInventory"));
        searchInventory->resize(400, 300);
        searchInventory->setStyleSheet(QStringLiteral("background-image: url(:/green/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/BG5.png);"));
        pushButton_2 = new QPushButton(searchInventory);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 220, 80, 25));
        pushButton = new QPushButton(searchInventory);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 130, 80, 25));
        splitter_2 = new QSplitter(searchInventory);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(40, 50, 108, 41));
        splitter_2->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        splitter_2->addWidget(label);
        lineEdit = new QLineEdit(splitter_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg green.png);"));
        splitter_2->addWidget(lineEdit);
        label_2 = new QLabel(searchInventory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 50, 121, 20));
        lineEdit_2 = new QLineEdit(searchInventory);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 70, 111, 21));
        lineEdit_2->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg green.png);"));
        pushButton_3 = new QPushButton(searchInventory);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 130, 80, 26));
        label_3 = new QLabel(searchInventory);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 70, 21, 20));
        splitter_2->raise();
        pushButton_2->raise();
        pushButton->raise();
        label_2->raise();
        lineEdit_2->raise();
        pushButton_3->raise();
        label_3->raise();

        retranslateUi(searchInventory);

        QMetaObject::connectSlotsByName(searchInventory);
    } // setupUi

    void retranslateUi(QWidget *searchInventory)
    {
        searchInventory->setWindowTitle(QApplication::translate("searchInventory", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("searchInventory", "Cancel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("searchInventory", "Search", Q_NULLPTR));
        label->setText(QApplication::translate("searchInventory", "Enter Item ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("searchInventory", "Enter Item Name", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("searchInventory", "Search", Q_NULLPTR));
        label_3->setText(QApplication::translate("searchInventory", "or", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class searchInventory: public Ui_searchInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHINVENTORY_H
