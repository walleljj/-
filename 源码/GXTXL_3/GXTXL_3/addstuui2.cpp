#include "addstuui2.h"
#include "gxtxl_3.h"
#include <QMessageBox>
#include "DaoStudent.h"
#include <iostream>
#include <QDesktopWidget>
#include "DaoMassage.h"
#include "massage.h"
#include "DaoClass.h"
using namespace std;


AddstuUi2::AddstuUi2(Student* stu,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
	move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
	QRegExp regx("[0-9]+$");
	QValidator* validator = new QRegExpValidator(regx, this);
	ui.lineEdit->setValidator(validator);
	ui.lineEdit_3->setValidator(validator);
	ui.lineEdit_5->setValidator(validator);

	m_result = stu;
	connect(ui.toolButton,SIGNAL(clicked()), this, SLOT(onBtnOK()));
	connect(ui.toolButton_2,SIGNAL(clicked()), this, SLOT(onBtnCancel()));
}

AddstuUi2::~AddstuUi2()
{

}
void AddstuUi2::onBtnOK(){
	//cout<<"点击了添加按钮"<<endl;
	Student stud ;

	int sno = ui.lineEdit->text().toInt();
	string sname = string((const char *)ui.lineEdit_2->text().toLocal8Bit());
	int classId = ui.lineEdit_3->text().toInt();
	string ssex = string((const char *)ui.lineEdit_4->text().toLocal8Bit());
	int age = ui.lineEdit_5->text().toInt();
	//cout<<"1"<<endl;
	stud.sno = sno;
	stud.sname = sname;
	stud.classId = classId;
	stud.ssex = ssex;
	stud.age = age;
	m_result->sno = sno;
	m_result->sname = sname;
	m_result->classId = classId;
	m_result->ssex = ssex;
	m_result->age = age;

	DaoStudent ds;
	//cout<<"2"<<endl;
	
	DaoMassage dm;
	if (ds.addStudent(stud)&&dm.addMassage(stud))
	{
		//cout<<"3"<<endl;
		QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("添加成功"));
		DaoClass dc;
		MyClass mc = dc.findById(classId);
		mc.number +=1;
		dc.updateClass(mc);
		
		accept();

	}else
		QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("添加失败"));

}

void AddstuUi2::onBtnCancel(){
	reject();

}
