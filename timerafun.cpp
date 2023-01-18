
#include "timerafun.h"


timerafun::timerafun(QString name_, QTime ms_)
{
    name = name_;
    mode = 1;
    work = true;
    time = QDateTime::currentDateTime();
    ms = ms_.msecsSinceStartOfDay();
    ms_end = ms;
    melodyURL = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
}


void timerafun::change(int a)
{
    if (work)
    {
        ms -= a;
    }
}


void timerafun::pp()
{
    if (work) pause();
    else play();
}

void timerafun::reset()
{
    work = true;
    time = QDateTime::currentDateTime();
    ms = ms_end;
}
