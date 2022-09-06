#ifndef change_window_h
#define change_window_h

#include <QtWidgets/QMainWindow>
#include "qpushbutton.h"

#include "ui_ChangeWindow.h"
#include "SecondWindow.h"
#include "ThirdWindow.h"

class ChangeWindow : public QMainWindow
{
    Q_OBJECT

public:
    ChangeWindow(QWidget *parent = nullptr);
    ~ChangeWindow();

private:
    Ui::ChangeWindowClass *ui;
    SecondWindow *second;
    ThirdWindow *third;

private slots:
    void slotMainWin();
    void slotSecondWin();
    void slotMainWin2();
    void slotThirdWin();
};


#endif