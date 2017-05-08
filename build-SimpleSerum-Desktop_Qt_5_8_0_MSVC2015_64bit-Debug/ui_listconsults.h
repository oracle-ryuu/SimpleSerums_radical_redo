/********************************************************************************
** Form generated from reading UI file 'listconsults.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTCONSULTS_H
#define UI_LISTCONSULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listconsults
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *listconsults)
    {
        if (listconsults->objectName().isEmpty())
            listconsults->setObjectName(QStringLiteral("listconsults"));
        listconsults->resize(400, 368);
        verticalLayoutWidget = new QWidget(listconsults);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 32, 341, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(listconsults);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 340, 89, 25));

        retranslateUi(listconsults);

        QMetaObject::connectSlotsByName(listconsults);
    } // setupUi

    void retranslateUi(QDialog *listconsults)
    {
        listconsults->setWindowTitle(QApplication::translate("listconsults", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("listconsults", "Consults for:", Q_NULLPTR));
        label_2->setText(QApplication::translate("listconsults", "[+] patient", Q_NULLPTR));
        pushButton->setText(QApplication::translate("listconsults", "List", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class listconsults: public Ui_listconsults {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTCONSULTS_H
