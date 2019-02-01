#ifndef XIANAGXI_H
#define XIANAGXI_H

#include <QWidget>
#include "ui_xianagxi.h"
#include <string>
using namespace std;

class xianagxi : public QWidget
{
	Q_OBJECT

public:
	xianagxi(QWidget *parent = 0,std::string str="1");
	~xianagxi();

private:
	Ui::xianagxi ui;
};

#endif // XIANAGXI_H
