
#ifndef ALARMA_H
#define ALARMA_H

#include "timera.h"
#include <QDialog>
#include <QDateTime>
#include <QMediaPlayer>

namespace Ui {class alarma;}

class alarma : public QDialog
{
    Q_OBJECT

public:
    explicit alarma(Timera*, QWidget *parent = nullptr);
    ~alarma();

private slots:
    void on_closeButton_clicked();

private:
    Ui::alarma *ui;
    QMediaPlayer *melody;
};

#endif // ALARMA_H
