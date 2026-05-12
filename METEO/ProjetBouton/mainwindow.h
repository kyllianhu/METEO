#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void mon_action1();
    void mon_action2();
    void mon_action3();
    void mon_action4();

    void action_timer1();
    void action_timer2();
    void action_timer3();
    void action_timer4();
private:
    Ui::MainWindow *ui;
    int compteur1;
    int compteur2;
    int compteur3;
    int compteur4;

    QTimer *timer1;
    QTimer *timer2;
    QTimer *timer3;
    QTimer *timer4;
};
#endif // MAINWINDOW_H
