#include "editstaff.h"
#include "ui_editstaff.h"
#include <QMessageBox>

editstaff::editstaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editstaff)
{
    ui->setupUi(this);
    db.connOpen();
}

editstaff::~editstaff()
{
    delete ui;
    db.connClose();
}

void editstaff::on_buttonBox_accepted()
{
    QString ID = ui->ID->text();
    //SEARCH WITH SQL
    QSqlQuery qry;
    qry.prepare("select s_name"
                " from STAFF where s_ssn=:s_ssn ");
    qry.bindValue(":s_ssn", ID);
    if(qry.exec()){
        if(qry.next()){
            _editstaff2 = new editstaff2(this,ID);
            _editstaff2->id = ID;
            _editstaff2->show();
        }
        else{
            QMessageBox::critical(this,tr("Not Found"),tr("Staff Not Found!"));
        }

    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}
