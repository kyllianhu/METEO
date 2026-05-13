#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), compteur1(1), compteur2(3), compteur3(2), compteur4(1), timer(new QTimer(this))
{
    ui->setupUi(this);
    ui->lcdNumber_1->display(1);
    ui->lcdNumber_2->display(3);
    ui->lcdNumber_3->display(2);
    ui->lcdNumber_4->display(1);

    QIcon icon1("nuage.png");
    QIcon icon2("pluie.png");
    QIcon icon3("soleil.png");
    QIcon icon4("neige.png");

    ui->pushButton_1->setIcon(icon1);
    ui->pushButton_2->setIcon(icon2);
    ui->pushButton_3->setIcon(icon3);
    ui->pushButton_4->setIcon(icon4);

    connect(ui->pushButton_1,&QPushButton::clicked,this, &MainWindow::mon_action);
    connect(ui->pushButton_2,&QPushButton::clicked,this, &MainWindow::mon_action);
    connect(ui->pushButton_3,&QPushButton::clicked,this, &MainWindow::mon_action);
    connect(ui->pushButton_4,&QPushButton::clicked,this, &MainWindow::mon_action);

    connect(timer,&QTimer::timeout,this, &MainWindow::action_timer);
    timer->start(1000);
}

void MainWindow::mon_action()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button == ui->pushButton_1) {
        compteur1++;
        ui->lcdNumber_1->display(compteur1);
    } else if (button == ui->pushButton_2) {
        compteur2++;
        ui->lcdNumber_2->display(compteur2);
    } else if (button == ui->pushButton_3) {
        compteur3++;
        ui->lcdNumber_3->display(compteur3);
    } else if (button == ui->pushButton_4) {
        compteur4++;
        ui->lcdNumber_4->display(compteur4);
    }
}

void MainWindow::action_timer()
{
    compteur1++;
    ui->lcdNumber_1->display(compteur1);
    
    compteur2++;
    ui->lcdNumber_2->display(compteur2);
    
    compteur3++;
    ui->lcdNumber_3->display(compteur3);
    
    compteur4++;
    ui->lcdNumber_4->display(compteur4);
}

MainWindow::~MainWindow()
{
    delete ui;
}
