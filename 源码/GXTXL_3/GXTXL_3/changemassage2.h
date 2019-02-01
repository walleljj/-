#ifndef CHANGEMASSAGE2_H
#define CHANGEMASSAGE2_H

#include <QDialog>
#include "ui_changemassage2.h"

class ChangeMassage2 : public QDialog
{
	Q_OBJECT

public:
	ChangeMassage2(int id,QWidget *parent = 0);
	~ChangeMassage2();
public slots:
	void onBtnOK1();
	void onBtnCancel3();
	void onBtn3();

private:
	Ui::ChangeMassage2 ui;
};

#endif // CHANGEMASSAGE2_H
