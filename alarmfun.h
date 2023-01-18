
#ifndef ALARMFUN_H
#define ALARMFUN_H

#include "timera.h"
#include <QMediaPlayer>
#include <QDateTime>
#include <QTime>

class alarmfun : public Timera
{
public:
    alarmfun (QString name, QTime end_time);
    void change(int a);
    void reset();
    void pp();
};

#endif // ALARMFUN_H
