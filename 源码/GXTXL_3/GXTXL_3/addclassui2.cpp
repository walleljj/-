#include "addclassui2.h"
#include <QDesktopWidget>
#include <QMessageBox>
#include "MyClass.h"
#include "DaoClass.h"

AddClassUi2::AddClassUi2(MyClass* my,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
	move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
	QRegExp regx("[0-9]+$");
	QValidator* validator = new QRegExpValidator(regx, this);
	ui.lineEdit->setValidator(validator);
	myre = my;

	connect(ui.toolButton,SIGNAL(clicked()), this, SLOT(onBtnOK()));
	connect(ui.toolButton_2,SIGNAL(clicked()), this, SLOT(onBtnCancel()));
}

AddClassUi2::~AddClassUi2()
{

}
void AddClassUi2::onBtnOK(){



	MyClass cla ;
	DaoClass dc;
	int classId = ui.lineEdit->text().toInt();
	string cName = string((const char *)ui.lineEdit_2->text().toLocal8Bit());
	string monitor = string((const char *)ui.lineEdit_4->text().toLocal8Bit());
	string teacher = string((const char *)ui.lineEdit_5->text().toLocal8Bit());

	//cout<<"1"<<endl;
	cla.classId = classId;
	cla.number = 0;
	cla.cName = cName;
	cla.monitor = monitor;
	cla.teacher = teacher;
	myre->classId = classId;
	myre->number = 0;
	myre->cName = cName;
	myre->monitor = monitor;
	myre->teacher=teacher;
	if (dc.addClass(cla))
	{
		//cout<<"3"<<endl;
		QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("添加成功"));
		accept();

	}else
		QMessageBox::about(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("添加失败"));

}
void AddClassUi2::onBtnCancel(){
	reject();
}
