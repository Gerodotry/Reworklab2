
#include "timera.h"

Timera::Timera(QString name_, int mode_, QDateTime time_, QTime end_time)
{
    name = name_;
    mode = mode_;
    work = true;
    time = time_;
    ms = end_time.msecsSinceStartOfDay();
    ms_end = ms;
    melodyURL = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
}
void Timera::set_melody(QUrl url)
{
    is_melodic = true;
    melodyURL = url;
}

void Timera::set_note(QString note_)
{
    is_note = true;
    note = note_;
}

void Timera::set_type(QString type_)
{
    type = type_;
}


