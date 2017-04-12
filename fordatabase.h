#ifndef FORDATABASE_H
#define FORDATABASE_H

#include <QDebug>
#include <QDialog>
#include <QtSql>

namespace Ui{
class dataffff;
}
class dataffff{

public:
    QSqlDatabase mydb;

    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

    bool connOpen(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
    // Need to put your path to the database here, need to figure out if there is a default path...
        mydb.setDatabaseName("/home/rosin40/Documents/the_database.db");

        if (!mydb.open()){
            qDebug()<<("Connection to database failed...");
            return false;
        }
        else {
            qDebug()<<("Connected");
            return true;
        }
    }
};
#endif // FORDATABASE_H
