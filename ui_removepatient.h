/********************************************************************************
** Form generated from reading UI file 'removepatient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEPATIENT_H
#define UI_REMOVEPATIENT_H

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

class Ui_removepatient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *ID;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok;
    QPushButton *pushButton;

    void setupUi(QDialog *removepatient)
    {
        if (removepatient->objectName().isEmpty())
            removepatient->setObjectName(QStringLiteral("removepatient"));
        removepatient->resize(400, 300);
        removepatient->setStyleSheet(QStringLiteral("background-image: url(:/red/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/BG6.png);"));
        verticalLayoutWidget = new QWidget(removepatient);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(69, 119, 241, 71));
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

        label_2 = new QLabel(removepatient);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 231, 41));
        horizontalLayoutWidget = new QWidget(removepatient);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 200, 281, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ok = new QPushButton(horizontalLayoutWidget);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout->addWidget(ok);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(removepatient);

        QMetaObject::connectSlotsByName(removepatient);
    } // setupUi

    void retranslateUi(QDialog *removepatient)
    {
        removepatient->setWindowTitle(QApplication::translate("removepatient", "Cal Clinic: Remove Patient", 0));
        label->setText(QApplication::translate("removepatient", "Patient ID", 0));
        label_2->setText(QApplication::translate("removepatient", "Remove patient", 0));
        ok->setText(QApplication::translate("removepatient", "OK", 0));
        pushButton->setText(QApplication::translate("removepatient", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class removepatient: public Ui_removepatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPATIENT_H
