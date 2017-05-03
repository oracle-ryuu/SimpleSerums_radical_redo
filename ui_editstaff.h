/********************************************************************************
** Form generated from reading UI file 'editstaff.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTAFF_H
#define UI_EDITSTAFF_H

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

class Ui_editstaff
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *ID;

    void setupUi(QDialog *editstaff)
    {
        if (editstaff->objectName().isEmpty())
            editstaff->setObjectName(QStringLiteral("editstaff"));
        editstaff->resize(400, 300);
        buttonBox = new QDialogButtonBox(editstaff);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 190, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(editstaff);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(120, 60, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        ID = new QLineEdit(verticalLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));

        verticalLayout->addWidget(ID);


        retranslateUi(editstaff);
        QObject::connect(buttonBox, SIGNAL(accepted()), editstaff, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editstaff, SLOT(reject()));

        QMetaObject::connectSlotsByName(editstaff);
    } // setupUi

    void retranslateUi(QDialog *editstaff)
    {
        editstaff->setWindowTitle(QApplication::translate("editstaff", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("editstaff", "Staff SSN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editstaff: public Ui_editstaff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTAFF_H
