
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QListWidgetItem>
#include <QMediaPlayer>

#include "TimeS.h"
#include "alarma.h"
#include "timera.h"
#include "alarmfun.h"
#include "timerafun.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QList<Timera*> timers;
    QTimer *timer;
    bool DNDisturb = false;
    QTime DND_start;
    QTime DND_finish;

public slots:
    void add_element(Timera* timer);
    void add_alarm(Timera* timer);
    void add_timer(Timera* timer);
    void end_signal(Timera* timer);
    void update_time();

private slots:
    void on_add_button_clicked();
    void on_delete_button_clicked();
    void on_listWidget_itemClicked(QListWidgetItem *item); 
    void on_comboBox_currentIndexChanged(int index);
    void on_play_button_clicked();
    void on_reset_button_clicked();
    void show_timer(Timera* current_timer);
    void on_checkBox_stateChanged(int arg1);
    void on_time_end_userTimeChanged(const QTime &time);
    void on_time_begin_userTimeChanged(const QTime &time);

private:
    Ui::MainWindow *ui;
    TimeS *ts;
    alarma *ta;

};
#endif // MAINWINDOW_H
