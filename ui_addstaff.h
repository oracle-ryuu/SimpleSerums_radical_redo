/********************************************************************************
** Form generated from reading UI file 'addstaff.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTAFF_H
#define UI_ADDSTAFF_H

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

class Ui_addstaff
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_ssn;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_title;
    QLineEdit *lineEdit_address;
    QLineEdit *lineEdit_phone;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *addstaff)
    {
        if (addstaff->objectName().isEmpty())
            addstaff->setObjectName(QStringLiteral("addstaff"));
        addstaff->resize(400, 300);
        addstaff->setAutoFillBackground(false);
        addstaff->setStyleSheet(QLatin1String("background-image: url(:/bg4/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/BG3.png);\n"
"background-image: url(:/BGs/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/admin.png);"));
        buttonBox = new QDialogButtonBox(addstaff);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(120, 240, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(addstaff);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 20, 160, 213));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_ssn = new QLineEdit(verticalLayoutWidget);
        lineEdit_ssn->setObjectName(QStringLiteral("lineEdit_ssn"));
        lineEdit_ssn->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg purple.png);"));

        verticalLayout->addWidget(lineEdit_ssn);

        lineEdit_user = new QLineEdit(verticalLayoutWidget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg purple.png);"));

        verticalLayout->addWidget(lineEdit_user);

        lineEdit_password = new QLineEdit(verticalLayoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg purple.png);"));

        verticalLayout->addWidget(lineEdit_password);

        lineEdit_name = new QLineEdit(verticalLayoutWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg purple.png);"));

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_title = new QLineEdit(verticalLayoutWidget);
        lineEdit_title->setObjectName(QStringLiteral("lineEdit_title"));
        lineEdit_title->setStyleSheet(QLatin1String("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg purple.png);\n"
"background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg purple.png);"));

        verticalLayout->addWidget(lineEdit_title);

        lineEdit_address = new QLineEdit(verticalLayoutWidget);
        lineEdit_address->setObjectName(QStringLiteral("lineEdit_address"));
        lineEdit_address->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg purple.png);"));

        verticalLayout->addWidget(lineEdit_address);

        lineEdit_phone = new QLineEdit(verticalLayoutWidget);
        lineEdit_phone->setObjectName(QStringLiteral("lineEdit_phone"));
        lineEdit_phone->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg purple.png);"));

        verticalLayout->addWidget(lineEdit_phone);

        verticalLayoutWidget_2 = new QWidget(addstaff);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(230, 20, 160, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

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


        retranslateUi(addstaff);
        QObject::connect(buttonBox, SIGNAL(accepted()), addstaff, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addstaff, SLOT(reject()));

        QMetaObject::connectSlotsByName(addstaff);
    } // setupUi

    void retranslateUi(QDialog *addstaff)
    {
        addstaff->setWindowTitle(QApplication::translate("addstaff", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("addstaff", "SSN", Q_NULLPTR));
        label_2->setText(QApplication::translate("addstaff", "Username", Q_NULLPTR));
        label_3->setText(QApplication::translate("addstaff", "Password", Q_NULLPTR));
        label_4->setText(QApplication::translate("addstaff", "Full Name", Q_NULLPTR));
        label_5->setText(QApplication::translate("addstaff", "Title", Q_NULLPTR));
        label_6->setText(QApplication::translate("addstaff", "Address", Q_NULLPTR));
        label_7->setText(QApplication::translate("addstaff", "Phone", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addstaff: public Ui_addstaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTAFF_H
