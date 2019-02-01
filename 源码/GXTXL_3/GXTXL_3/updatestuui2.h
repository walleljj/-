#ifndef UPDATESTUUI2_H
#define UPDATESTUUI2_H

#include <QDialog>
#include "ui_updatestuui2.h"

class updatestuui2 : public QDialog
{
	Q_OBJECT

public:
	updatestuui2(int sno,QWidget *parent = 0);
	~updatestuui2();
	public slots:
		void onBtnOK();
		void onBtnCancel();

private:
	Ui::updatestuui2 ui;
};

#endif // UPDATESTUUI2_H
