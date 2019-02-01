#ifndef ADDCLASSUI2_H
#define ADDCLASSUI2_H
#include "MyClass.h"

#include <QDialog>
#include "ui_addclassui2.h"

class AddClassUi2 : public QDialog
{
	Q_OBJECT

public:
	AddClassUi2(MyClass *my,QWidget *parent = 0);
	~AddClassUi2();
	public slots:
		void onBtnOK();
		void onBtnCancel();

private:
	Ui::AddClassUi2 ui;
	MyClass* myre;
};

#endif // ADDCLASSUI2_H
