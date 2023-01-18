
#include "alarma.h"
#include "ui_alarma.h"
alarma::alarma(Timera* end_timer, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alarma)
{
    ui->setupUi(this);

    melody = new QMediaPlayer();
    melody->setMedia(end_timer->melodyURL);
    if (melody->state() == QMediaPlayer::StoppedState)
        melody->setPosition(0);
    melody->play();

    ui->name->setText(end_timer->name);
    if (end_timer->is_note) ui->note->setText(end_timer->note);
}


alarma::~alarma()
{
    delete ui;
}

void alarma::on_closeButton_clicked()
{
    melody->stop();
    delete melody;
    close();
}
