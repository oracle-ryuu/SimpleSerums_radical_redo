#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db.connOpen();
}

MainWindow::~MainWindow()
{
    delete ui;
    db.connClose();
}

void MainWindow::on_pushButton_clicked()
{
    QString username,password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    QSqlQuery qry;
        qry.prepare("select * from STAFF where s_login=:user and s_password=:pass");
        qry.bindValue(":user", username);
        qry.bindValue(":pass", password);
        //QMap<QString,QVariant> q = qry.boundValues();
        if (qry.exec()){
            int count = 0;
            while(qry.next()){
                count++;
            }
            if (count == 1){
                ui->label_4->setText("username and password is correct");
                _maindirectory= new MainDirectory(this);
                _maindirectory->show();
            }
            if (count > 1){
                ui->label_4->setText("Duplicate username and password");
            }
            if (count < 1){
                ui->label_4->setText("username and password is incorrect");
            }
        }
        else{
            qDebug()<<"its not working...";
            qDebug()<<qry.executedQuery();
            qDebug()<<qry.QSqlQuery::lastError();
        }

}

void MainWindow::on_lineEdit_password_returnPressed() //Hit enter/return in pasword will act as on_pushButton_clicked()
{
    QString username,password;
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    QSqlQuery qry;
        qry.prepare("select * from STAFF where s_login=:user and s_password=:pass");
        qry.bindValue(":user", username);
        qry.bindValue(":pass", password);
        //QMap<QString,QVariant> q = qry.boundValues();
        if (qry.exec()){
            int count = 0;
            while(qry.next()){
                count++;
            }
            if (count == 1){
                ui->label_4->setText("username and password is correct");
                _maindirectory= new MainDirectory(this);
                _maindirectory->show();
            }
            if (count > 1){
                ui->label_4->setText("Duplicate username and password");
            }
            if (count < 1){
                ui->label_4->setText("username and password is incorrect");
            }
        }
        else{
            qDebug()<<"its not working...";
            qDebug()<<qry.executedQuery();
            qDebug()<<qry.QSqlQuery::lastError();
        }
}
