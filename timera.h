

#ifndef TIMERA_H
#define TIMERA_H

#include <QMediaPlayer>
#include <QDateTime>
#include <QTime>

class Timera
{
public:
    QString name;
    bool work;
    int mode;

    bool is_note = false;
    QString note = "";

    QString type = "default";

    bool is_melodic = false;
    QUrl melodyURL;

    QDateTime time; //start or end time

    long long ms_end;
    long long ms;

    Timera(){}
    Timera(QString name, int mode, QDateTime time, QTime end_time);
    virtual void change(int a) { ms -= a; }
    virtual void reset(){}
    virtual void pp(){}
    void set_melody(QUrl);
    void set_note(QString);
    void set_type(QString);

};

#include "alarmfun.h"
#include "timerafun.h"
#endif // TIMERA_H
