#ifndef CHANGEMASSAGE_H
#define CHANGEMASSAGE_H

#include <QWidget>
#include "ui_changemassage.h"

class ChangeMassage : public QWidget
{
	Q_OBJECT

public:
	ChangeMassage(int id ,QWidget *parent = 0);
	~ChangeMassage();
public slots:
	void onBtnOK1();
	void onBtnCancel1();
private:
	Ui::ChangeMassage ui;
};

#endif // CHANGEMASSAGE_H
