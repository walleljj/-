#ifndef UPDATECLASSUI2_H
#define UPDATECLASSUI2_H

#include <QDialog>
#include "ui_updateclassui2.h"

class updateclassui2 : public QDialog
{
	Q_OBJECT

public:
	updateclassui2(int classId,QWidget *parent = 0);
	~updateclassui2();
	public slots:
		void onBtnOK1();
		void onBtnCancel1();

private:
	Ui::updateclassui2 ui;
};

#endif // UPDATECLASSUI2_H
