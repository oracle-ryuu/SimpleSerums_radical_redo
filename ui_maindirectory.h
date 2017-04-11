/********************************************************************************
** Form generated from reading UI file 'maindirectory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIRECTORY_H
#define UI_MAINDIRECTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDirectory
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QPushButton *pushButton_9;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QCheckBox *checkBox;

    void setupUi(QDialog *MainDirectory)
    {
        if (MainDirectory->objectName().isEmpty())
            MainDirectory->setObjectName(QStringLiteral("MainDirectory"));
        MainDirectory->resize(1035, 761);
        verticalLayoutWidget = new QWidget(MainDirectory);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 160, 701));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalLayoutWidget_2 = new QWidget(MainDirectory);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(840, 20, 160, 701));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(verticalLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(verticalLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(MainDirectory);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(470, 20, 93, 28));
        lineEdit_2 = new QLineEdit(MainDirectory);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(420, 110, 181, 25));
        pushButton_8 = new QPushButton(MainDirectory);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(420, 170, 80, 25));
        label_2 = new QLabel(MainDirectory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 90, 181, 17));
        pushButton_9 = new QPushButton(MainDirectory);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(520, 170, 80, 25));
        listWidget = new QListWidget(MainDirectory);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(230, 60, 141, 351));
        listWidget_2 = new QListWidget(MainDirectory);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(640, 60, 141, 351));
        checkBox = new QCheckBox(MainDirectory);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(420, 140, 70, 17));

        retranslateUi(MainDirectory);

        QMetaObject::connectSlotsByName(MainDirectory);
    } // setupUi

    void retranslateUi(QDialog *MainDirectory)
    {
        MainDirectory->setWindowTitle(QApplication::translate("MainDirectory", "Dialog", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainDirectory", "search inventory", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainDirectory", "add stock", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainDirectory", "remove stock", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainDirectory", "search patient", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainDirectory", "add patient", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainDirectory", "remove patient", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainDirectory", "check in", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainDirectory", "Cancel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainDirectory", "Enter Patient SSN", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainDirectory", "Queue", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainDirectory", "CheckBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainDirectory: public Ui_MainDirectory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIRECTORY_H
