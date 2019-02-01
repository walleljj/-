#ifndef GXTXL_3_H
#define GXTXL_3_H


#include <QtGui/QMainWindow>
#include "ui_gxtxl_3.h"
#include "Student.h"
#include "xianagxi.h"
#include "MyClass.h"
#include "massage.h"

class GXTXL_3 : public QMainWindow
{
	Q_OBJECT

public:
	GXTXL_3(QWidget *parent = 0, Qt::WFlags flags = 0);
	~GXTXL_3();
	void display1(Student& record);
	void display1(StudentList& records);
	void displayClass(MyClass& cl);
	void displayClass(ClassList& li);
	void displayMassage(massage& ma);
	void displayMassage(MassageList& li);
public slots :
	void OnCheck(bool checked);
	void Oncheck2(bool checked);
	void OnDoubleCheckItem( QTreeWidgetItem * item, int column);
	void popMenu(const QPoint &pos);
	void deleteItem();
	void renameWell();
	void chSt();
	void OnAddStu();
	void OnLookClass();
	void OnLookStudent();
	void classMenu(const QPoint &pos);
	void OnDelClass();
	void OnUpdClass();
	void OnUpdClassMain();
	void OnAddClass();

	void OnLookMassage();
	void massageMenu(const QPoint &pos);
	void delMa();
	void upMa();
	void changeMa();//菜单栏修改信息

private:
	Ui::GXTXL_3Class ui;
};

#endif // GXTXL_3_H
