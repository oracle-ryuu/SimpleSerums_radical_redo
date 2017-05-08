/********************************************************************************
** Form generated from reading UI file 'editstaff2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTAFF2_H
#define UI_EDITSTAFF2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editstaff2
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_title;
    QLineEdit *lineEdit_address;
    QLineEdit *lineEdit_phone;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *editstaff2)
    {
        if (editstaff2->objectName().isEmpty())
            editstaff2->setObjectName(QStringLiteral("editstaff2"));
        editstaff2->resize(400, 300);
        buttonBox = new QDialogButtonBox(editstaff2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 250, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(editstaff2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 160, 213));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_user = new QLineEdit(verticalLayoutWidget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));

        verticalLayout->addWidget(lineEdit_user);

        lineEdit_password = new QLineEdit(verticalLayoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        verticalLayout->addWidget(lineEdit_password);

        lineEdit_name = new QLineEdit(verticalLayoutWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_title = new QLineEdit(verticalLayoutWidget);
        lineEdit_title->setObjectName(QStringLiteral("lineEdit_title"));

        verticalLayout->addWidget(lineEdit_title);

        lineEdit_address = new QLineEdit(verticalLayoutWidget);
        lineEdit_address->setObjectName(QStringLiteral("lineEdit_address"));

        verticalLayout->addWidget(lineEdit_address);

        lineEdit_phone = new QLineEdit(verticalLayoutWidget);
        lineEdit_phone->setObjectName(QStringLiteral("lineEdit_phone"));

        verticalLayout->addWidget(lineEdit_phone);

        verticalLayoutWidget_2 = new QWidget(editstaff2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(220, 20, 160, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);


        retranslateUi(editstaff2);
        QObject::connect(buttonBox, SIGNAL(accepted()), editstaff2, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editstaff2, SLOT(reject()));

        QMetaObject::connectSlotsByName(editstaff2);
    } // setupUi

    void retranslateUi(QDialog *editstaff2)
    {
        editstaff2->setWindowTitle(QApplication::translate("editstaff2", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("editstaff2", "Username", Q_NULLPTR));
        label_3->setText(QApplication::translate("editstaff2", "Password", Q_NULLPTR));
        label_4->setText(QApplication::translate("editstaff2", "Full Name", Q_NULLPTR));
        label_5->setText(QApplication::translate("editstaff2", "Title", Q_NULLPTR));
        label_6->setText(QApplication::translate("editstaff2", "Address", Q_NULLPTR));
        label_7->setText(QApplication::translate("editstaff2", "Phone", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editstaff2: public Ui_editstaff2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTAFF2_H
