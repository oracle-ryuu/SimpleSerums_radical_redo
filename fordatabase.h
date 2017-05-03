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
    // default path can be found in "Projects" on the left in run settings
        mydb.setDatabaseName("the_database.db");

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
