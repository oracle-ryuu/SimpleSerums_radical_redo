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
#include <QtWidgets/QComboBox>
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
    QPushButton *pushButton_10;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QPushButton *pushButton_9;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QCheckBox *checkBox;
    QLabel *label;
    QLabel *label_3;
    QListWidget *listWidget_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QComboBox *comboBox;
    QComboBox *comboBox_2;

    void setupUi(QDialog *MainDirectory)
    {
        if (MainDirectory->objectName().isEmpty())
            MainDirectory->setObjectName(QStringLiteral("MainDirectory"));
        MainDirectory->resize(1035, 761);
        MainDirectory->setStyleSheet(QStringLiteral("background-image: url(:/img/img/BG3.png);"));
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

        pushButton_10 = new QPushButton(verticalLayoutWidget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(MainDirectory);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(470, 20, 93, 28));
        lineEdit_2 = new QLineEdit(MainDirectory);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(420, 110, 181, 25));
        lineEdit_2->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg orange.png);"));
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
        listWidget->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg orange.png);"));
        listWidget_2 = new QListWidget(MainDirectory);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(640, 60, 141, 351));
        listWidget_2->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg orange.png);"));
        checkBox = new QCheckBox(MainDirectory);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(420, 140, 121, 21));
        label = new QLabel(MainDirectory);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 30, 121, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_3 = new QLabel(MainDirectory);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(670, 30, 121, 21));
        label_3->setFont(font);
        listWidget_3 = new QListWidget(MainDirectory);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(370, 440, 271, 231));
        listWidget_3->setStyleSheet(QStringLiteral("background-image: url(:/txrbkgd/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/text bg orange.png);"));
        pushButton_11 = new QPushButton(MainDirectory);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(460, 240, 89, 25));
        pushButton_12 = new QPushButton(MainDirectory);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(460, 280, 89, 25));
        pushButton_13 = new QPushButton(MainDirectory);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(440, 320, 121, 25));
        comboBox = new QComboBox(MainDirectory);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(240, 430, 111, 22));
        comboBox_2 = new QComboBox(MainDirectory);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(660, 430, 111, 22));

        retranslateUi(MainDirectory);
        QObject::connect(pushButton_7, SIGNAL(clicked()), lineEdit_2, SLOT(setFocus()));

        QMetaObject::connectSlotsByName(MainDirectory);
    } // setupUi

    void retranslateUi(QDialog *MainDirectory)
    {
        MainDirectory->setWindowTitle(QApplication::translate("MainDirectory", "pull actually it sa", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainDirectory", "search inventory", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainDirectory", "add stock", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainDirectory", "remove stock", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainDirectory", "search patient", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainDirectory", "add patient", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainDirectory", "edit patient", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainDirectory", "remove patient", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainDirectory", "check in", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainDirectory", "Cancel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainDirectory", "Enter Patient SSN", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainDirectory", "Queue", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainDirectory", "Emergency", Q_NULLPTR));
        label->setText(QApplication::translate("MainDirectory", "Standard", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainDirectory", "Emergency", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainDirectory", "Add Staff", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainDirectory", "Edit Staff", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainDirectory", "Remove Staff", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainDirectory: public Ui_MainDirectory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIRECTORY_H
