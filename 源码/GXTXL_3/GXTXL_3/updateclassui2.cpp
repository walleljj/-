#include "updateclassui2.h"
#include <QDesktopWidget>
#include "MyClass.h"
#include "DaoClass.h"
#include <QMessageBox>

updateclassui2::updateclassui2(int classId,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
	move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
	connect(ui.toolButton,SIGNAL(clicked()), this, SLOT(onBtnOK1()));
	connect(ui.toolButton_2,SIGNAL(clicked()), this, SLOT(onBtnCancel1()));

	MyClass cla;
	DaoClass dc;
	cla = dc.findById(classId);
	if (classId==cla.classId)
	{
		ui.lineEdit->setText(QString("%1").arg(classId));
		ui.lineEdit_2->setText(QString(QString::fromLocal8Bit(cla.cName.c_str())));
		ui.lineEdit_4->setText(QString(QString::fromLocal8Bit(cla.monitor.c_str())));
		ui.lineEdit_5->setText(QString(QString::fromLocal8Bit(cla.teacher.c_str())));
	}

}

updateclassui2::~updateclassui2()
{

}
void updateclassui2::onBtnOK1(){

	int classId = ui.lineEdit->text().toInt();
	MyClass cla ;
	DaoClass dc;
	cla = dc.findById(classId);
	if (classId==cla.classId)
	{
		string cName = string((const char *)ui.lineEdit_2->text().toLocal8Bit());
		string monitor = string((const char *)ui.lineEdit_4->text().toLocal8Bit());
		string teacher = string((const char *)ui.lineEdit_5->text().toLocal8Bit());

		//cout<<"1"<<endl;
		cla.cName = cName;
		cla.monitor = monitor;
		cla.teacher = teacher;
		//cout<<"2"<<endl;
		if (dc.updateClass(cla))
		{
			//cout<<"3"<<endl;
			QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("修改成功"));
			accept();
		}else
			QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("修改失败"));
			
		}else
			QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("修改失败"));
}

void updateclassui2::onBtnCancel1(){
	
	reject();

}

