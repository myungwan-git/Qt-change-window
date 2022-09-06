#pragma once

#include <QMainWindow>
#include "ui_SecondWindow.h"

class SecondWindow : public QMainWindow
{
	Q_OBJECT

public:
	SecondWindow(QWidget *parent = nullptr);
	~SecondWindow();

private:
	Ui::SecondWindowClass *ui;
};
