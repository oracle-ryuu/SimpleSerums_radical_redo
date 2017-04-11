/********************************************************************************
** Form generated from reading UI file 'removepatient.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
        verticalLayoutWidget = new QWidget(removepatient);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(69, 119, 241, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        ID = new QLineEdit(verticalLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));

        verticalLayout->addWidget(ID);

        label_2 = new QLabel(removepatient);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 91, 41));
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
        removepatient->setWindowTitle(QApplication::translate("removepatient", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("removepatient", "Patient ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("removepatient", "Remove patient", Q_NULLPTR));
        ok->setText(QApplication::translate("removepatient", "OK", Q_NULLPTR));
        pushButton->setText(QApplication::translate("removepatient", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class removepatient: public Ui_removepatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPATIENT_H
