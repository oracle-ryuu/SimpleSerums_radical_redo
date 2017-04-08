#include "consultprescript.h"
#include "ui_consultprescript.h"
#include <QMessageBox>

consultPrescript::consultPrescript(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consultPrescript)
{
    ui->setupUi(this);
    db.connOpen();
    ui->label_3_Patient_name->setText(ssn);
}

consultPrescript::~consultPrescript()
{
    delete ui;
    db.connClose();
}


void consultPrescript::on_pushButton_clicked()
{
    QString description = ui->textEdit->toPlainText();
    qDebug()<<ui->dateTimeEdit->text();
    QSqlQuery qry;
    qry.prepare("insert into CONSULT(c_patient, c_appointment, c_description)"
                "values(:ssn , :appointment , :description)");
    qry.bindValue(":ssn",ssn);
    qry.bindValue(":appointment",ui->dateTimeEdit->text());
    qry.bindValue(":description",description);
    if(qry.exec()){
        QMessageBox::critical(this,tr("Save"),tr("Consult saved"));
        if(ui->checkBox->isChecked()){
            //Prescription box
            prescription *_prescription = new prescription(this);
            _prescription->show();
            _prescription->ssn = ssn;
            _prescription->appointment = ui->dateTimeEdit->text();
            this->hide();
        }
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}
