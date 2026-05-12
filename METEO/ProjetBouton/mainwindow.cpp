#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), compteur1(1), compteur2(3), compteur3(2), compteur4(1), timer1 (new QTimer), timer2 (new QTimer), timer3 (new QTimer), timer4 (new QTimer)
{
    ui->setupUi(this);
    ui->lcdNumber_1->display(1);
    ui->lcdNumber_2->display(3);
    ui->lcdNumber_3->display(2);
    ui->lcdNumber_4->display(1);

    QIcon icon1("meteo/nuage.png");
    QIcon icon2("meteo/pluie.png");
    QIcon icon3("meteo/soleil.png");
    QIcon icon4("meteo/neige.png");

    ui->pushButton_1->setIcon(icon1);
    ui->pushButton_2->setIcon(icon2);
    ui->pushButton_3->setIcon(icon3);
    ui->pushButton_4->setIcon(icon4);

    connect(ui->pushButton_1,&QPushButton::clicked,this, &MainWindow::mon_action1);
    connect(ui->pushButton_2,&QPushButton::clicked,this, &MainWindow::mon_action2);
    connect(ui->pushButton_3,&QPushButton::clicked,this, &MainWindow::mon_action3);
    connect(ui->pushButton_4,&QPushButton::clicked,this, &MainWindow::mon_action4);

    timer1->start(1000);
    connect(timer1,&QTimer::timeout,this, &MainWindow::action_timer1);
    timer2->start(1000);
    connect(timer2,&QTimer::timeout,this, &MainWindow::action_timer2);
    timer3->start(1000);
    connect(timer3,&QTimer::timeout,this, &MainWindow::action_timer3);
    timer4->start(1000);
    connect(timer4,&QTimer::timeout,this, &MainWindow::action_timer4);
}

void MainWindow::mon_action1()
{
    compteur1++;
    ui->lcdNumber_1->display(compteur1);
}

void MainWindow::mon_action2()
{
    compteur2++;
    ui->lcdNumber_2->display(compteur2);
}

void MainWindow::mon_action3()
{
    compteur3++;
    ui->lcdNumber_3->display(compteur3);
}

void MainWindow::mon_action4()
{
    compteur4++;
    ui->lcdNumber_4->display(compteur4);
}

void MainWindow::action_timer1()
{
    compteur1++;
    ui->lcdNumber_1->display(compteur1);
}

void MainWindow::action_timer2()
{
    compteur2++;
    ui->lcdNumber_2->display(compteur2);
}

void MainWindow::action_timer3()
{
    compteur3++;
    ui->lcdNumber_3->display(compteur3);
}

void MainWindow::action_timer4()
{
    compteur4++;
    ui->lcdNumber_4->display(compteur4);
}

MainWindow::~MainWindow()
{
    delete ui;
}
