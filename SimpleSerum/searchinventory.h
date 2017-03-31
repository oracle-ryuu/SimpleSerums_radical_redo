#ifndef SEARCHINVENTORY_H
#define SEARCHINVENTORY_H

#include <QWidget>

namespace Ui {
class searchInventory;
}

class searchInventory : public QWidget
{
    Q_OBJECT

public:
    explicit searchInventory(QWidget *parent = 0);
    ~searchInventory();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::searchInventory *ui;
};

#endif // SEARCHINVENTORY_H
