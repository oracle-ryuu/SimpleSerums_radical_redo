#ifndef CHECKIN_H
#define CHECKIN_H

#include <QWidget>

namespace Ui {
class checkIn;
}

class checkIn : public QWidget
{
    Q_OBJECT

public:
    explicit checkIn(QWidget *parent = 0);
    ~checkIn();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::checkIn *ui;
};

#endif // CHECKIN_H
