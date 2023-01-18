
#ifndef TIMERAFUN_H
#define TIMERAFUN_H

#include "timera.h"
#include <QMediaPlayer>
#include <QDateTime>
#include <QTime>


class timerafun : public Timera
{
public:
    timerafun(QString name, QTime end_time);
    void change(int a);
    void reset();
    void pp();
    void pause(){work = false;}
    void play() {work = true;}
};

#endif // TIMERAFUN_H
