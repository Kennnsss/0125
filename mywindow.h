#ifndef MYWINDOW_H
#define MYWINDOW_H
#include<QObject>
#include<QWidget>
#include<QLabel>
#include<QFont>
#include<QLineEdit>
#include<QPushButton>
#include<QMessageBox>

class MyWindow : public QWidget
{
    Q_OBJECT
private:
    QLabel *lbl;
    QLineEdit *edt;
    QPushButton *btn;
    QPushButton *btnClose;
public:
    MyWindow();
public slots:
    void say();
    void close();
};

#endif // MYWINDOW_H
