#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QRandomGenerator>
#include <qrandom.h>
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //BACKGROUND IMAGE
    /*QPixmap background("D:/QT PROJECTS/Drinkopoly/Dice/background.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);
    */

    QPixmap board("D:/QT PROJECTS/Drinkopoly/Dice/background.jpg");
    ui->label_2->setPixmap(board);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
       QPixmap dice1("D:/QT PROJECTS/Drinkopoly/Dice/1.jpg");
       QPixmap dice2("D:/QT PROJECTS/Drinkopoly/Dice/2.jpg");
       QPixmap dice3("D:/QT PROJECTS/Drinkopoly/Dice/3.jpg");
       QPixmap dice4("D:/QT PROJECTS/Drinkopoly/Dice/4.jpg");
       QPixmap dice5("D:/QT PROJECTS/Drinkopoly/Dice/5.jpg");
       QPixmap dice6("D:/QT PROJECTS/Drinkopoly/Dice/6.jpg");


       int roll = qrand() % 6 + 1;
       QString status = QString("You rolled %1!").arg(roll);
       QMessageBox::information(this,tr("Rolling..."), status);

       if(roll == 1)
       {
           ui->label_3->setPixmap(dice1);
       }
       else if(roll == 2)
       {
           ui->label_3->setPixmap(dice2);
       }
       else if(roll == 3)
       {
           ui->label_3->setPixmap(dice3);
       }
       else if(roll == 4)
       {
           ui->label_3->setPixmap(dice4);
       }
       else if(roll == 5)
       {
           ui->label_3->setPixmap(dice5);
       }
       else if(roll == 6)
       {
           ui->label_3->setPixmap(dice6);
       }



       //converts an integer to string
       /*int value;
       QString aString = QString::number(value);*/





}
