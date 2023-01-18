
#ifndef TIMES_H
#define TIMES_H

#include "timera.h"
#include "alarmfun.h"
#include "timerafun.h"
#include <QDialog>
#include <QDateTime>
#include <QDir>
#include <QFileDialog>

namespace Ui {class TimeS;}

class TimeS : public QDialog
{
    Q_OBJECT

public:
    explicit TimeS(QWidget *parent = nullptr);
    ~TimeS();
    Ui::TimeS *ts;

private slots:
    void on_pushButton_OK_clicked();
    void on_pushButton_clicked();

    void on_melody_button_clicked();

private:
    QUrl melody_path = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
signals:
    void send_element (Timera* a);

};

#endif // TIMES_H
