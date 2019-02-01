#include "updatestuui2.h"
#include <QDesktopWidget>
#include "Student.h"
#include "DaoStudent.h"
#include <QDesktopWidget>
#include <QMessageBox>

updatestuui2::updatestuui2(int sno,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
	move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
	connect(ui.toolButton,SIGNAL(clicked()), this, SLOT(onBtnOK()));
	connect(ui.toolButton_2,SIGNAL(clicked()), this, SLOT(onBtnCancel()));


	Student stu;
	DaoStudent ds;
	stu = ds.findById(sno);
	if (sno==stu.sno)
	{
		ui.lineEdit->setText(QString("%1").arg(sno));
		ui.lineEdit_2->setText(QString(QString::fromLocal8Bit(stu.sname.c_str())));
		ui.lineEdit_3->setText(QString("%1").arg(stu.classId));
		ui.lineEdit_4->setText(QString(QString::fromLocal8Bit(stu.ssex.c_str())));
		ui.lineEdit_5->setText(QString("%1").arg(stu.age));
	}
}

updatestuui2::~updatestuui2()
{

}
void updatestuui2::onBtnOK(){
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
	DaoStudent ds;
	//cout<<"2"<<endl;
	if (ds.updateStudent(stud))
	{
		//cout<<"3"<<endl;
		QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("修改成功"));
		accept();

	}else
		QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("修改失败"));


}

void updatestuui2::onBtnCancel(){
	reject();

}