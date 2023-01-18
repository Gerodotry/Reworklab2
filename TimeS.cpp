

#include "TimeS.h"
#include "ui_timersetter.h"
#include <QDebug>
#include "timera.h"


 TimeS::TimeS(QWidget *parent) :
    QDialog(parent),
    ts(new Ui::timersetter)
{
    ts->setupUi(this);
    QWidget* pwidget = parentWidget();
    connect(this,SIGNAL(send_element(Timera*)),pwidget,SLOT(add_element(Timera*)));
}


TimeSr::~TimeS()
{
    delete ts;
}


void TimeS::on_pushButton_OK_clicked()
{
    if (ts->radio_alarm->isChecked()){
        Timera* timer = new SmartTimerAlarm(ts->plainTextEdit->toPlainText(), ts->timeEdit->time());
        if(ts->check_note->isChecked()) timer->set_note(ts->textEdit->toPlainText());
        if(ts->check_melody->isChecked()) timer->set_melody(melody_path);
        timer->set_type(ts->timer_type->toPlainText());
        send_element(timer);
    }
    else if (ts->radio_timer->isChecked()){        
        Timera* timer = new timerafun(ts->plainTextEdit->toPlainText(), ts->timeEdit->time());
        if(ts->check_note->isChecked()) timer->set_note(ts->textEdit->toPlainText());
        if(ts->check_melody->isChecked()) timer->set_melody(melody_path);
        timer->set_type(ts->timer_type->toPlainText());
        send_element(timer);
    }

    close();
}


void TimeS::on_pushButton_clicked()
{
    close();
}
void TimeS::on_melody_button_clicked()
{
    melody_path = QFileDialog::getOpenFileUrl(this, "melody", QUrl::fromLocalFile("C:/"), ("wav files (*.wav)"));
}
