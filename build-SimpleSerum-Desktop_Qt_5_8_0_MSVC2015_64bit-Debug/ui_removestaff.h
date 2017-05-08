/********************************************************************************
** Form generated from reading UI file 'removestaff.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVESTAFF_H
#define UI_REMOVESTAFF_H

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

class Ui_removestaff
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *ID;

    void setupUi(QDialog *removestaff)
    {
        if (removestaff->objectName().isEmpty())
            removestaff->setObjectName(QStringLiteral("removestaff"));
        removestaff->resize(400, 300);
        removestaff->setStyleSheet(QStringLiteral("background-image: url(:/BGs/build-SimpleSerum-Desktop_Qt_5_8_0_MSVC2015_64bit-Debug/admin.png);"));
        buttonBox = new QDialogButtonBox(removestaff);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 180, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(removestaff);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(120, 70, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        ID = new QLineEdit(verticalLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));

        verticalLayout->addWidget(ID);


        retranslateUi(removestaff);
        QObject::connect(buttonBox, SIGNAL(accepted()), removestaff, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), removestaff, SLOT(reject()));

        QMetaObject::connectSlotsByName(removestaff);
    } // setupUi

    void retranslateUi(QDialog *removestaff)
    {
        removestaff->setWindowTitle(QApplication::translate("removestaff", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("removestaff", "Staff SSN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class removestaff: public Ui_removestaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVESTAFF_H
