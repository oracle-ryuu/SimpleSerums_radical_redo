/********************************************************************************
** Form generated from reading UI file 'addpatient.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPATIENT_H
#define UI_ADDPATIENT_H

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

class Ui_addPatient
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *SSN;
    QLineEdit *pat_Name;
    QLineEdit *DOB;
    QLineEdit *Address;
    QLineEdit *City;
    QLineEdit *State;
    QLineEdit *Zip;
    QLineEdit *Sex;
    QLineEdit *pat_Phone;
    QLineEdit *ins_Name;
    QLineEdit *ins_Nom;
    QLineEdit *doc_ID;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *addPatient)
    {
        if (addPatient->objectName().isEmpty())
            addPatient->setObjectName(QStringLiteral("addPatient"));
        addPatient->resize(518, 746);
        verticalLayoutWidget_2 = new QWidget(addPatient);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(290, 30, 211, 621));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_2->addWidget(label_12);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_2->addWidget(label_11);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        verticalLayoutWidget = new QWidget(addPatient);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 20, 221, 651));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SSN = new QLineEdit(verticalLayoutWidget);
        SSN->setObjectName(QStringLiteral("SSN"));

        verticalLayout->addWidget(SSN);

        pat_Name = new QLineEdit(verticalLayoutWidget);
        pat_Name->setObjectName(QStringLiteral("pat_Name"));

        verticalLayout->addWidget(pat_Name);

        DOB = new QLineEdit(verticalLayoutWidget);
        DOB->setObjectName(QStringLiteral("DOB"));

        verticalLayout->addWidget(DOB);

        Address = new QLineEdit(verticalLayoutWidget);
        Address->setObjectName(QStringLiteral("Address"));

        verticalLayout->addWidget(Address);

        City = new QLineEdit(verticalLayoutWidget);
        City->setObjectName(QStringLiteral("City"));

        verticalLayout->addWidget(City);

        State = new QLineEdit(verticalLayoutWidget);
        State->setObjectName(QStringLiteral("State"));

        verticalLayout->addWidget(State);

        Zip = new QLineEdit(verticalLayoutWidget);
        Zip->setObjectName(QStringLiteral("Zip"));

        verticalLayout->addWidget(Zip);

        Sex = new QLineEdit(verticalLayoutWidget);
        Sex->setObjectName(QStringLiteral("Sex"));

        verticalLayout->addWidget(Sex);

        pat_Phone = new QLineEdit(verticalLayoutWidget);
        pat_Phone->setObjectName(QStringLiteral("pat_Phone"));

        verticalLayout->addWidget(pat_Phone);

        ins_Name = new QLineEdit(verticalLayoutWidget);
        ins_Name->setObjectName(QStringLiteral("ins_Name"));

        verticalLayout->addWidget(ins_Name);

        ins_Nom = new QLineEdit(verticalLayoutWidget);
        ins_Nom->setObjectName(QStringLiteral("ins_Nom"));

        verticalLayout->addWidget(ins_Nom);

        doc_ID = new QLineEdit(verticalLayoutWidget);
        doc_ID->setObjectName(QStringLiteral("doc_ID"));

        verticalLayout->addWidget(doc_ID);

        horizontalLayoutWidget = new QWidget(addPatient);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 680, 311, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(addPatient);

        QMetaObject::connectSlotsByName(addPatient);
    } // setupUi

    void retranslateUi(QDialog *addPatient)
    {
        addPatient->setWindowTitle(QApplication::translate("addPatient", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("addPatient", "Social Security", Q_NULLPTR));
        label_3->setText(QApplication::translate("addPatient", "Name", Q_NULLPTR));
        label_6->setText(QApplication::translate("addPatient", "Date of birth (yyyy-mm-dd)", Q_NULLPTR));
        label_9->setText(QApplication::translate("addPatient", "Street address", Q_NULLPTR));
        label_12->setText(QApplication::translate("addPatient", "City", Q_NULLPTR));
        label_11->setText(QApplication::translate("addPatient", "State", Q_NULLPTR));
        label_10->setText(QApplication::translate("addPatient", "Zip code", Q_NULLPTR));
        label_8->setText(QApplication::translate("addPatient", "Sex", Q_NULLPTR));
        label_7->setText(QApplication::translate("addPatient", "Phone", Q_NULLPTR));
        label_5->setText(QApplication::translate("addPatient", "Insurance Comp", Q_NULLPTR));
        label_2->setText(QApplication::translate("addPatient", "Customer Number", Q_NULLPTR));
        label->setText(QApplication::translate("addPatient", "Doctor ID", Q_NULLPTR));
        pat_Phone->setText(QString());
        pushButton_2->setText(QApplication::translate("addPatient", "ok", Q_NULLPTR));
        pushButton->setText(QApplication::translate("addPatient", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addPatient: public Ui_addPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPATIENT_H
