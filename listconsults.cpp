#include "listconsults.h"
#include "ui_listconsults.h"
#include <QMessageBox>

listconsults::listconsults(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listconsults)
{
    ui->setupUi(this);
    db.connOpen();
    ui->label_2->setText(name);
}

listconsults::~listconsults()
{
    delete ui;
    db.connClose();
}

void listconsults::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QMessageBox::information(this,"Consult",item->data(Qt::UserRole).toString());
}

void listconsults::on_pushButton_clicked()
{
    ui->label_2->setText(name);
    QSqlQuery qry;
    qry.prepare("select c_appointment,c_description from CONSULT where c_patient=:ID ");
    qry.bindValue(":ID",ID);
    if(qry.exec()){
        while(qry.next()){
            QListWidgetItem *thing = new QListWidgetItem;
            QVariant v;
            v.setValue(qry.value(1));
            thing->setText(qry.value(0).toString());
            thing->setData(Qt::UserRole, v);
            ui->listWidget->addItem(thing);
        }
        ui->pushButton->hide();
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}
