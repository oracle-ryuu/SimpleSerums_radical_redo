/********************************************************************************
** Form generated from reading UI file 'searchpatient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPATIENT_H
#define UI_SEARCHPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchpatient
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *ID;

    void setupUi(QDialog *searchpatient)
    {
        if (searchpatient->objectName().isEmpty())
            searchpatient->setObjectName(QStringLiteral("searchpatient"));
        searchpatient->resize(400, 300);
        searchpatient->setStyleSheet(QStringLiteral("background-image: url(:/red/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/BG6.png);"));
        horizontalLayoutWidget = new QWidget(searchpatient);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(59, 230, 295, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        verticalLayoutWidget = new QWidget(searchpatient);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 100, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg orange.png);"));

        verticalLayout->addWidget(label);

        ID = new QLineEdit(verticalLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg orange.png);"));

        verticalLayout->addWidget(ID);


        retranslateUi(searchpatient);

        QMetaObject::connectSlotsByName(searchpatient);
    } // setupUi

    void retranslateUi(QDialog *searchpatient)
    {
        searchpatient->setWindowTitle(QApplication::translate("searchpatient", "Cal Clinic:  Search Patient", 0));
        pushButton_3->setText(QApplication::translate("searchpatient", "Consults", 0));
        pushButton_2->setText(QApplication::translate("searchpatient", "OK", 0));
        pushButton->setText(QApplication::translate("searchpatient", "Cancel", 0));
        label->setText(QApplication::translate("searchpatient", "Patient ID", 0));
    } // retranslateUi

};

namespace Ui {
    class searchpatient: public Ui_searchpatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPATIENT_H
