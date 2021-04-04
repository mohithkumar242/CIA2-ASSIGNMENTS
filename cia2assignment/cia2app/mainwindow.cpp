#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QPixmap"
#include "QDebug"
#include "QIcon"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Powerbutton->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
     QMessageBox::information(this,"Mohith 212218104111","This Is Information Box");

}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"Mohith","Do You Like Apples",QMessageBox::Yes|QMessageBox::No);
           if(reply==QMessageBox::Yes){
               QMessageBox::information(this,"APPLE","Yes");
           }
           else{
               QMessageBox::information(this,"No Apple","No");
           }

}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"My Title","this is my question",QMessageBox::Yes|QMessageBox::No|QMessageBox::YesAll|QMessageBox::NoAll);
        if(reply==QMessageBox::Yes)
            qDebug()<< "Nothing is Dispalyed";
        else if(reply==QMessageBox::YesAll)
            QMessageBox::warning(this,"Message Display","Display The Message With Warning As YesToAll");
        else if(reply==QMessageBox::No)
            qDebug() <<"Nothing Is Displayed";
        else
            QMessageBox::warning(this,"No Message Dispaly","Dont Display The Message With Warning As NoToAll");

}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Critical Message","This is a Warning Message");

}


void MainWindow::on_Powerbutton_toggled(bool checked)
{
    if(checked){
        qDebug()<<"Button Checked--ON--";
        ui->Powerbutton->setIcon(QIcon("C:/Users/mohit/OneDrive/Desktop/qt/cia2assignment/greenbutton.jpg"));
        ui->Powerbutton->setIconSize(QSize(125,125));
    }
    else {
        qDebug()<<"Button Checked--off--";
        ui->Powerbutton->setIcon(QIcon("C:/Users/mohit/OneDrive/Desktop/qt/cia2assignment/redbutton.jpg"));
        ui->Powerbutton->setIconSize(QSize(125,125));

    }

}
