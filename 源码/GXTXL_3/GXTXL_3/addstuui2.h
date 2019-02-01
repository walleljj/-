#ifndef ADDSTUUI2_H
#define ADDSTUUI2_H
#include "Student.h"

#include <QDialog>
#include "ui_addstuui2.h"

class AddstuUi2 : public QDialog
{
	Q_OBJECT

public:
	AddstuUi2(Student* stu,QWidget *parent = 0);
	~AddstuUi2();
public slots:
	void onBtnOK();
	void onBtnCancel();

private:
	Ui::AddstuUi2 ui;
	Student* m_result;
};

#endif // ADDSTUUI2_H
