#include "maindirectory.h"
#include "ui_maindirectory.h"
#include "consultprescript.h"
#include <QMessageBox>

MainDirectory::MainDirectory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDirectory)
{
    ui->setupUi(this);

    ui->lineEdit_2->hide();
    ui->label_2->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->checkBox->hide();
    //these are admin buttons
    ui->pushButton_11->hide();
    ui->pushButton_12->hide();
    ui->pushButton_13->hide();
    //this is supposed to hide show buttons if you are admin
    if(returnAdmin()){
        ui->pushButton_11->show();
        ui->pushButton_12->show();
        ui->pushButton_13->show();
    }

    //add rooms to drop box
    ui->comboBox->addItem("Room 1");
    ui->comboBox->addItem("Room 2");
    ui->comboBox->addItem("Room 3");
    ui->comboBox->addItem("Room 4");

    ui->comboBox_2->addItem("Room 1");
    ui->comboBox_2->addItem("Room 2");
    ui->comboBox_2->addItem("Room 3");
    ui->comboBox_2->addItem("Room 4");

    //standard
    connect(ui->listWidget, SIGNAL(itemClicked(QListWidgetItem*)),
            this, SLOT(listItemClicked(QListWidgetItem*)));
}

MainDirectory::~MainDirectory()
{
    delete ui;
}


void MainDirectory::on_pushButton_3_clicked()
{
    _searchinventory= new searchInventory(this);
   // _searchinventory->setWindowFlags(Qt::Popup);
    _searchinventory->show();

}

void MainDirectory::on_pushButton_6_clicked()
{
    _addpatient= new addPatient(this);
    _addpatient->show();
}

void MainDirectory::on_pushButton_2_clicked()
{
    _addinventory= new addInventory(this);
   // _addinventory->setWindowFlags(Qt::Popup);
    _addinventory->show();
}

void MainDirectory::on_pushButton_clicked()
{
    _removeinventory= new removeInventory(this);
    _removeinventory->show();
}

void MainDirectory::on_pushButton_4_clicked()
{
    _removepatient = new removepatient(this);
    _removepatient->show();
}

void MainDirectory::on_pushButton_5_clicked()
{
    _searchpatient = new searchpatient(this);
    _searchpatient ->show();

}

void MainDirectory::on_pushButton_7_clicked()
{
    ui->lineEdit_2->show();
    ui->label_2->show();
    ui->pushButton_8->show();
    ui->pushButton_9->show();
    ui->checkBox->show();
}

void MainDirectory::on_pushButton_8_clicked()
{
    ui->lineEdit_2->hide();
    ui->label_2->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->lineEdit_2->clear();
    ui->checkBox->hide();
    if(ui->checkBox->isChecked())
        ui->checkBox->setChecked(false);
}

void MainDirectory::on_pushButton_9_clicked()
{
    SSN = ui->lineEdit_2->text();
    ui->lineEdit_2->clear();

    QListWidgetItem *name = new QListWidgetItem;
    QSqlQuery qry;
    qry.prepare("select p_name, p_ssn from PATIENT where p_ssn=:p_ssn ");
    qry.bindValue(":p_ssn",SSN);
    if(ui->checkBox->isChecked())   //If the checkBox is checked for emergency
    {
        if(qry.exec()){
            if(qry.next()){
                name->setText(qry.value(0).toString());
                bool add = true;
                for(int i = 0; i < ui->listWidget_2->count(); i++){     //Put patient under emergency listwidget
                    if(ui->listWidget_2->item(i)->data(0).toString() == name->text() ){
                        add = false;
                    }
                }
                if (add){
                    //embed SSN to name
                    QVariant v;
                    v.setValue(qry.value(1));
                    name->setData(Qt::UserRole, v);
                    ui->listWidget_2->addItem(name);
                }
                else{
                    QMessageBox::critical(this,tr("Duplicate"),tr("Patient already checked in!"));
                }

            }
            else{
                QMessageBox::critical(this,tr("Not Found"),tr("Patient Not Found!\nTry adding Patient"));
            }
        }
        else{
            QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        }
        ui->checkBox->setChecked(false);
    }
    else    //If checkBox is not checked
    {
        if(qry.exec()){
            if(qry.next()){
                name->setText(qry.value(0).toString());
                bool add = true;
                for(int i = 0; i < ui->listWidget->count(); i++){
                    if(ui->listWidget->item(i)->data(0).toString() == name->text() ){ //Put patient under standard listwidget
                        add = false;
                    }
                }
                if (add){
                    //embed SSN to name
                    QVariant v;
                    v.setValue(qry.value(1));
                    name->setData(Qt::UserRole, v);
                    ui->listWidget->addItem(name);
                }
                else{
                    QMessageBox::critical(this,tr("Duplicate"),tr("Patient already checked in!"));
                }

            }
            else{
                QMessageBox::critical(this,tr("Not Found"),tr("Patient Not Found!\nTry adding Patient"));
            }
        }
        else{
            QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        }
    }


    ui->lineEdit_2->hide();
    ui->label_2->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->checkBox->hide();
}

//bring up window to allow addition of consultation/prescription
//standard
void MainDirectory::listItemClicked(QListWidgetItem* item)
{
    int roomNum;
    roomNum = ui->comboBox->currentText().mid(5).toInt();   //Obtain Room Number by getting the last digit from string

    if(!full[roomNum - 1]) //If room is currently Used, output error
    {
        QMessageBox::critical(this, tr("Being Used"), tr("Select room is currently being used"));
    }
    else
    {
        //retrieve SSN from the name(item)
        QVariant v = item->data(Qt::UserRole);
        //QMessageBox::information(this, "SSN check", v.value<QString>());
        //    consultPrescript* _consultPrescript = new consultPrescript(this);
        //    _consultPrescript->show();
        //    _consultPrescript->ssn = v.value<QString>();
        QListWidgetItem *name = new QListWidgetItem;
        QString nameTxt = item->data(0).toString();

        while (nameTxt.size() < 56)
            nameTxt += " ";

        name->setText(nameTxt + ui->comboBox->currentText());        //Set text of patient's name into name variable
        name->setData(Qt::UserRole, v.value<QString>());//Set SSN data ino name variable
        name->setTextAlignment(Qt::AlignRight);

        ui->listWidget_3->addItem(name);

        item->setHidden(true);
        full[roomNum - 1] = false;
    }
}

//bring up window to allow addition of consultation/prescription
//emergency
void MainDirectory::on_listWidget_2_itemClicked(QListWidgetItem *item)
{
    int roomNum;
    roomNum = ui->comboBox_2->currentText().mid(5).toInt();   //Obtain Room Number by getting the last digit from string

    if(!full[roomNum - 1]) //If room is currently Used, output error
    {
        QMessageBox::critical(this, tr("Being Used"), tr("Select room is currently being used"));
    }
    else
    {
        //retrieve SSN from the name(item)
        QVariant v = item->data(Qt::UserRole);
        //QMessageBox::information(this, "SSN check", v.value<QString>());
        //    consultPrescript* _consultPrescript = new consultPrescript(this);
        //    _consultPrescript->show();
        //    _consultPrescript->ssn = v.value<QString>();
        QListWidgetItem *name = new QListWidgetItem;
        QString nameTxt = item->data(0).toString();

        while (nameTxt.size() < 56)
            nameTxt += " ";

        name->setText(nameTxt + ui->comboBox_2->currentText());        //Set text of patient's name into name variable
        name->setData(Qt::UserRole, v.value<QString>());//Set SSN data ino name variable
        name->setTextAlignment(Qt::AlignRight);

        ui->listWidget_3->addItem(name);

        item->setHidden(true);
        full[roomNum - 1] = false;
    }
}

void MainDirectory::on_pushButton_10_clicked()
{
    editpatient *ed = new editpatient(this);
    ed->show();
}


void MainDirectory::on_listWidget_3_itemClicked(QListWidgetItem *item)
{
    int roomNum;
    roomNum = item->text().right(1).toInt();
    full[roomNum - 1] = true;

    QVariant v = item->data(Qt::UserRole);
    //QMessageBox::information(this, "SSN check", v.value<QString>());
    consultPrescript* _consultPrescript = new consultPrescript(this);
    _consultPrescript->show();
    _consultPrescript->ssn = v.value<QString>();
    item->setHidden(true);
}

void MainDirectory::on_pushButton_11_clicked()
{
    _addstaff = new addstaff(this);
    _addstaff->show();
}

void MainDirectory::on_pushButton_12_clicked()
{
    _editstaff = new editstaff(this);
    _editstaff->show();
}

void MainDirectory::on_pushButton_13_clicked()
{
    _removestaff = new removestaff(this);
    _removestaff->show();
}
