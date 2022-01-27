#include "mywindow.h"

MyWindow::MyWindow()
{
    this->setGeometry(20,30,800,600);

    QFont *font = new QFont ("Time",22, true);

    lbl = new QLabel (this);
    lbl ->setGeometry(20,30,300,60);
    lbl ->setText("Имя");
    lbl ->setFont(*font);

    edt = new QLineEdit(this);
    edt ->setGeometry(370,30,300,60);

    btn = new QPushButton(this);
    btn ->setGeometry(200,100,100,30);
    btn->setText("Ok");

    btnClose = new QPushButton(this);
    btnClose ->setGeometry(400,100,100,30);
    btnClose->setText("Закрыть");

    connect(this->btn, SIGNAL (clicked(bool)),this, SLOT(say()));
    connect(this->btnClose, SIGNAL (clicked(bool)),this, SLOT(close()));
}
 void MyWindow::say() {
 QString name = this ->edt->text();
 QMessageBox *mes =new QMessageBox(this);
 mes->setText(" привет "+name+"!");
 mes->show();
 }
 void MyWindow::close()
 {
     exit(0);
 }
