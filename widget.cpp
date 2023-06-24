#include "widget.h"
#include "./ui_widget.h"

#include "register.h"
#include "calendarwindow.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("CalenPanda");
    resize(618, 309);
    setWindowIcon(QIcon(":/images/calenpanda_icon.png"));
}

Widget::~Widget()
{
//    delete ui;
}




void Widget::on_LoginButton_clicked()
{
    QString username = ui->UsernameInput->text();
    QString password = ui->PasswordInput->text();

    if(username.length() == 0 || password.length() == 0)
    {
        QMessageBox::information(NULL, username, "Username or Password should not be empty", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

    }
    else
    {
        // send it to the server side, check username and password
        this->close();
        calendarWindow.show();
    }
}

void Widget::on_RememberMe_stateChanged(int arg1)
{
    if(arg1 == 1)
    {
        //access the local db to setup your status
    }
}


void Widget::on_ForgetPassword_clicked()
{
    this->hide();

}

