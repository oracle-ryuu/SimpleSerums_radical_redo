/********************************************************************************
** Form generated from reading UI file 'editpatient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPATIENT_H
#define UI_EDITPATIENT_H

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

class Ui_editpatient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *ID;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *editpatient)
    {
        if (editpatient->objectName().isEmpty())
            editpatient->setObjectName(QStringLiteral("editpatient"));
        editpatient->resize(400, 300);
        editpatient->setStyleSheet(QStringLiteral("background-image: url(:/red/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/BG6.png);"));
        verticalLayoutWidget = new QWidget(editpatient);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(101, 40, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        ID = new QLineEdit(verticalLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));

        verticalLayout->addWidget(ID);

        horizontalLayoutWidget = new QWidget(editpatient);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 170, 241, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(editpatient);

        QMetaObject::connectSlotsByName(editpatient);
    } // setupUi

    void retranslateUi(QDialog *editpatient)
    {
        editpatient->setWindowTitle(QApplication::translate("editpatient", "Cal Clinic: Search Patient", 0));
        label->setText(QApplication::translate("editpatient", "Patient ID", 0));
        pushButton_2->setText(QApplication::translate("editpatient", "OK", 0));
        pushButton->setText(QApplication::translate("editpatient", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class editpatient: public Ui_editpatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPATIENT_H
