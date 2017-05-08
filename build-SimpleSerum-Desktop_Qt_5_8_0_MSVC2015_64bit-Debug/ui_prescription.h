/********************************************************************************
** Form generated from reading UI file 'prescription.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESCRIPTION_H
#define UI_PRESCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prescription
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *prescription)
    {
        if (prescription->objectName().isEmpty())
            prescription->setObjectName(QStringLiteral("prescription"));
        prescription->resize(400, 300);
        verticalLayoutWidget = new QWidget(prescription);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 40, 168, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_id = new QLineEdit(verticalLayoutWidget);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        verticalLayout->addWidget(lineEdit_id);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(prescription);
        QObject::connect(buttonBox, SIGNAL(accepted()), prescription, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), prescription, SLOT(reject()));

        QMetaObject::connectSlotsByName(prescription);
    } // setupUi

    void retranslateUi(QDialog *prescription)
    {
        prescription->setWindowTitle(QApplication::translate("prescription", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("prescription", "Item ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("prescription", "Quantity", Q_NULLPTR));
        pushButton->setText(QApplication::translate("prescription", "Add prescription", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class prescription: public Ui_prescription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESCRIPTION_H
