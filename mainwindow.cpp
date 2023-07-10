#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->login->text()=="login" && ui->parol->text()=="parol"){
        ui->label_4->setText("parol va login to'g'ri");
    }
    else
    { ui->label_4->setText("parol yoki login xato <br>"
                           "qayta urinib ko'ring");
}}

void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isCheckable()){
        ui->parol->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->parol->setEchoMode(QLineEdit::Password);
    }
}
