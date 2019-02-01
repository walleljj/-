#include "xianagxi.h"
#include <QDesktopWidget>
#include <sstream>
#include "DaoMassage.h"
#include "massage.h"
#include <QPixmap>
#include <QPainter>
#include<iostream>


xianagxi::xianagxi(QWidget *parent,string str)
	: QWidget(parent)
{
	ui.setupUi(this);
	QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();Ҳ����
	move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
	istringstream is(str); //���������ַ��������������ݳ�ʼ��Ϊ��12�����ַ��� 
	int i; 
	is >> i; //��is���ж���һ��int��������i�� 


	DaoMassage dm;
	massage ma = dm.findBySno(i);

	ui.label->setText(QString("%1").arg(ma.id));
	ui.label_2->setText(QString("%1").arg(ma.sno));
	ui.label_3->setText(QString("%1").arg(ma.classId));
	ui.label_4->setText(QString(QString::fromLocal8Bit(ma.name.c_str())));
	ui.label_5->setText(QString(QString::fromLocal8Bit(ma.sex.c_str())));
	ui.label_6->setText(QString(QString::fromLocal8Bit(ma.card.c_str())));
	ui.label_7->setText(QString(QString::fromLocal8Bit(ma.adress.c_str())));
	ui.label_8->setText(QString(QString::fromLocal8Bit(ma.phone.c_str())));
	ui.label_9->setText(QString(QString::fromLocal8Bit(ma.email.c_str())));
	ui.label_10->setText(QString(QString::fromLocal8Bit(ma.post.c_str())));
	//Photos* p(NULL);
	//p->show();
	if (ma.photo!="")
	{
		QImage* img = new QImage;
		QImage* scaledimg=new QImage;
		if (img->load(QString(QString::fromLocal8Bit(ma.photo.c_str()))))
		{
			int width = ui.label_21->width();
			int height = ui.label_21->height();
			int Owidth=img->width(),Oheight=img->height();
			int Fwidth,Fheight;       //���ź��ͼƬ��С
			int Mul;            //��¼ͼƬ��label��С�ı�������������ͼƬ
			if(Owidth/width>=Oheight/height)
				Mul=Owidth/width;
			else
				Mul=Oheight/height;
			Fwidth=Owidth/Mul;
			Fheight=Oheight/Mul;
			*scaledimg = img->scaled(Fwidth,Fheight,Qt::KeepAspectRatio);
			ui.label_21->setPixmap(QPixmap::fromImage(*scaledimg));
		}
		
	}
	





	


}

xianagxi::~xianagxi()
{

}
