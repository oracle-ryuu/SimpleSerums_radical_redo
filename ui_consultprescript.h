/********************************************************************************
** Form generated from reading UI file 'consultprescript.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTPRESCRIPT_H
#define UI_CONSULTPRESCRIPT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consultPrescript
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3_Patient_name;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_2;
    QTextEdit *textEdit;
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QDialog *consultPrescript)
    {
        if (consultPrescript->objectName().isEmpty())
            consultPrescript->setObjectName(QStringLiteral("consultPrescript"));
        consultPrescript->resize(400, 300);
        consultPrescript->setStyleSheet(QLatin1String("background-image: url(:/bg4/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/BG3.png);\n"
"background-image: url(:/BGs/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/consult.png);"));
        verticalLayoutWidget = new QWidget(consultPrescript);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 30, 321, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3_Patient_name = new QLabel(verticalLayoutWidget);
        label_3_Patient_name->setObjectName(QStringLiteral("label_3_Patient_name"));
        label_3_Patient_name->setLayoutDirection(Qt::LeftToRight);
        label_3_Patient_name->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3_Patient_name);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setAlignment(Qt::AlignCenter);
        dateTimeEdit->setDate(QDate(2017, 4, 7));
        dateTimeEdit->setTime(QTime(8, 0, 0));
        dateTimeEdit->setMinimumTime(QTime(0, 0, 0));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateTimeEdit->setCalendarPopup(true);
        dateTimeEdit->setTimeSpec(Qt::LocalTime);

        verticalLayout_2->addWidget(dateTimeEdit);


        verticalLayout->addLayout(verticalLayout_2);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(consultPrescript);

        QMetaObject::connectSlotsByName(consultPrescript);
    } // setupUi

    void retranslateUi(QDialog *consultPrescript)
    {
        consultPrescript->setWindowTitle(QApplication::translate("consultPrescript", "Cal Clinic: Consultation", 0));
        label_3_Patient_name->setText(QApplication::translate("consultPrescript", "[+] Patients name", 0));
        label->setText(QApplication::translate("consultPrescript", "Timestamp", 0));
        dateTimeEdit->setDisplayFormat(QApplication::translate("consultPrescript", "yyyy-MM-dd hh:mm ", 0));
        label_2->setText(QApplication::translate("consultPrescript", "Consult", 0));
        checkBox->setText(QApplication::translate("consultPrescript", "Precription for this Patient?", 0));
        pushButton->setText(QApplication::translate("consultPrescript", "Continue", 0));
    } // retranslateUi

};

namespace Ui {
    class consultPrescript: public Ui_consultPrescript {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTPRESCRIPT_H
