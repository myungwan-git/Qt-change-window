#pragma once

#include <QMainWindow>
#include "ui_ThirdWindow.h"

class ThirdWindow : public QMainWindow
{
	Q_OBJECT

public:
	ThirdWindow(QWidget *parent = nullptr);
	~ThirdWindow();

private:
	Ui::ThirdWindowClass *ui;
};
