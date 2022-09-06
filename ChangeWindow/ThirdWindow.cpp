#include "ThirdWindow.h"

ThirdWindow::ThirdWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::ThirdWindowClass)
{
	ui->setupUi(this);
}

ThirdWindow::~ThirdWindow()
{}
