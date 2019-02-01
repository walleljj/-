#include "changemassage.h"
#include "massage.h"
#include "DaoMassage.h"
#include <QDesktopWidget>
#include <QMessageBox>

ChangeMassage::ChangeMassage(int id,QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();Ҳ����
	move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
	connect(ui.toolButton,SIGNAL(clicked()), this, SLOT(onBtnOK1()));
	connect(ui.toolButton_2,SIGNAL(clicked()), this, SLOT(onBtnCancel1()));


	DaoMassage dm;
	massage ma = dm.findById(id);
	if (id==ma.id)
	{
	
	ui.lineEdit->setText(QString("%1").arg(ma.sno));
	ui.lineEdit_2->setText(QString("%1").arg(ma.classId));
	ui.lineEdit_3->setText(QString(QString::fromLocal8Bit(ma.name.c_str())));
	ui.lineEdit_4->setText(QString(QString::fromLocal8Bit(ma.sex.c_str())));
	ui.lineEdit_5->setText(QString(QString::fromLocal8Bit(ma.card.c_str())));
	ui.lineEdit_6->setText(QString(QString::fromLocal8Bit(ma.adress.c_str())));
	ui.lineEdit_7->setText(QString(QString::fromLocal8Bit(ma.phone.c_str())));
	ui.lineEdit_8->setText(QString(QString::fromLocal8Bit(ma.email.c_str())));
	ui.lineEdit_9->setText(QString(QString::fromLocal8Bit(ma.post.c_str())));
	ui.lineEdit_10->setText(QString(QString::fromLocal8Bit(ma.photo.c_str())));}




}

ChangeMassage::~ChangeMassage()
{

}

void ChangeMassage::onBtnOK1(){

	int sno = ui.lineEdit->text().toInt();
	DaoMassage dm;
	massage ma = dm.findBySno(sno);
	if (sno==ma.sno)
	{
		int classId = ui.lineEdit_2->text().toInt();
		string name = string((const char *)ui.lineEdit_3->text().toLocal8Bit());
		string sex = string((const char *)ui.lineEdit_4->text().toLocal8Bit());
		string card= string((const char *)ui.lineEdit_5->text().toLocal8Bit());
		string adress= string((const char *)ui.lineEdit_6->text().toLocal8Bit());
		string phone= string((const char *)ui.lineEdit_7->text().toLocal8Bit());
		string email= string((const char *)ui.lineEdit_8->text().toLocal8Bit());
		string post= string((const char *)ui.lineEdit_9->text().toLocal8Bit());
		string photo= string((const char *)ui.lineEdit_10->text().toLocal8Bit());

		//cout<<"1"<<endl;
		ma.classId = classId;
		ma.name = name;
		ma.sex = sex;
		ma.card = card;
		ma.adress = adress;
		ma.phone = phone;
		ma.email = email;
		ma.post = post;
		ma.photo = photo;
		//cout<<"2"<<endl;
		if (dm.updateMassage(ma))
		{
			//cout<<"3"<<endl;
			QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("�޸ĳɹ�"));
			close();



		}else
			QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("�޸�ʧ��"));


	}else
		QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("�޸�ʧ��"));
	//accept();
}

void ChangeMassage::onBtnCancel1(){
	close();
}