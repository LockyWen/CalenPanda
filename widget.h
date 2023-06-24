#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QIcon>
#include <QMessageBox>
#include <QMainWindow>
#include "calendarwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_LoginButton_clicked();

    void on_RememberMe_stateChanged(int arg1);

    void on_ForgetPassword_clicked();

private:
    Ui::Widget *ui;
    CalendarWindow calendarWindow;

};
#endif // WIDGET_H
