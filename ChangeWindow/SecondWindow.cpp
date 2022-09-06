#include "SecondWindow.h"

SecondWindow::SecondWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::SecondWindowClass)
{
	ui->setupUi(this);
	//setFixedSize(1500,1000);
}

SecondWindow::~SecondWindow()
{}
