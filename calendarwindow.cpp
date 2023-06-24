#include "calendarwindow.h"
#include "ui_calendarwindow.h"

CalendarWindow::CalendarWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalendarWindow)
{
    ui->setupUi(this);
    setWindowTitle("calen window");

    // get screen geometry to make sure that height and width fits the whole screen
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();

    resize(width, height);
    setWindowIcon(QIcon(":/images/calenpanda_icon.png"));
}

CalendarWindow::~CalendarWindow()
{
    delete ui;
}
