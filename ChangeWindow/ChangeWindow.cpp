#include "ChangeWindow.h"

ChangeWindow::ChangeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ChangeWindowClass)
{
    ui->setupUi(this);

    second = new SecondWindow();
    second->setFixedSize(1500,1000);

    third = new ThirdWindow();
    third->setFixedSize(1500,1000);

    // layout size fix
    setFixedSize(1500,1000);

    setWindowTitle("Penteract Station V1.1");
    setWindowIcon(QIcon("D:/kmw/fishing.jpg"));


    //-----------------------------------------------------
    // Main Window
    //-----------------------------------------------------
    QPushButton *moveSecondBtn = new QPushButton("Setting the second", this);
    QPushButton *moveThirdBtn = new QPushButton("Setting the third", this);
    moveSecondBtn->setGeometry(100,100,200,50);
    moveThirdBtn->setGeometry(100,200,200,50);
    connect(moveSecondBtn, SIGNAL(clicked()), this, SLOT(slotSecondWin()));
    connect(moveThirdBtn, SIGNAL(clicked()), this, SLOT(slotThirdWin()));

    //-----------------------------------------------------
    // Second Window
    //-----------------------------------------------------    
    QPushButton *moveMainBtn = new QPushButton("Exit Setting", second);
    moveMainBtn->setGeometry(1250,900,200,50);
    connect(moveMainBtn, SIGNAL(clicked()), this, SLOT(slotMainWin()));

    //-----------------------------------------------------
    // Third Window
    //-----------------------------------------------------    
    QPushButton *moveMainBtn2 = new QPushButton("Exit Third Setting", third);
    moveMainBtn2->setGeometry(1250,900,200,50);
    connect(moveMainBtn2, SIGNAL(clicked()), this, SLOT(slotMainWin2()));
    


}

void ChangeWindow::slotMainWin() {
    this->show();
    second->hide();
}

void ChangeWindow::slotSecondWin() {
    second->show();
    this->hide();
}

void ChangeWindow::slotThirdWin() {
    third->show();
    this->hide();
}


void ChangeWindow::slotMainWin2() {
    this->show();
    third->hide();
}




ChangeWindow::~ChangeWindow() {
    delete ui;
    delete second;
}
