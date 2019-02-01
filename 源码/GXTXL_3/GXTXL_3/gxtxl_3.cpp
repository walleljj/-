#include "gxtxl_3.h"
#include "Student.h"
#include "DaoStudent.h"
#include "xianagxi.h"
#include "addstuui2.h"
#include <QDesktopWidget>
#include <iostream>
#include <QMessageBox>
#include "updatestuui2.h"
#include "DaoClass.h"
#include "updateclassui2.h"
#include "addclassui2.h"
#include "massage.h"
#include "DaoMassage.h"
#include "changemassage2.h"
using namespace std;

GXTXL_3::GXTXL_3(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	
	ui.setupUi(this);

	/************************************************************************/
	/* ���ھ�����ʾ                                                         */
	/************************************************************************/
	QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();Ҳ����
	move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
	ui.treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
	ui.treeWidget_2->setVisible(false);
	ui.treeWidget_3->setVisible(false);
	ui.toolButton_2->setVisible(false);

	//�����п�
	int t1 = ui.treeWidget->width();
	ui.treeWidget->setColumnWidth(0,t1/5);
	ui.treeWidget->setColumnWidth(1,t1/5);
	ui.treeWidget->setColumnWidth(2,t1/5);
	ui.treeWidget->setColumnWidth(3,t1/5);
	//ui.treeWidget->setColumnWidth(4,t1/5);

	int t2 = ui.treeWidget_2->width();
	ui.treeWidget_2->setColumnWidth(0,t2/13);
	ui.treeWidget_2->setColumnWidth(1,t2/9);
	ui.treeWidget_2->setColumnWidth(2,t2/15);
	ui.treeWidget_2->setColumnWidth(3,t2/15);
	ui.treeWidget_2->setColumnWidth(4,t2/17);

	ui.treeWidget_3->setColumnWidth(0,t1/5);
	ui.treeWidget_3->setColumnWidth(1,t1/5);
	ui.treeWidget_3->setColumnWidth(2,t1/5);
	ui.treeWidget_3->setColumnWidth(3,t1/5);
	
	

	connect(ui.toolButton , SIGNAL(clicked(bool)),this,SLOT(OnCheck(bool)));//��ѯѧ��
	connect(ui.toolButton_2 , SIGNAL(clicked(bool)),this,SLOT(Oncheck2(bool)));//��ѯ��ϸ

	connect(ui.treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem *,int)),SLOT(OnDoubleCheckItem(QTreeWidgetItem *,int)));//ѧ����˫��
	
	
	connect(ui.changeStu,SIGNAL(triggered()),this,SLOT(chSt()));//�˵��޸�ѧ��	
	connect(ui.changeClass, SIGNAL(triggered()), this, SLOT(OnUpdClassMain()));//�˵��޸İ༶
	connect(ui.addClass, SIGNAL(triggered()), this, SLOT(OnAddClass()));//�˵���Ӱ༶
	connect(ui.addStu,SIGNAL(triggered()),this,SLOT(OnAddStu()));//�˵����ѧ��
	connect(ui.changeM,SIGNAL(triggered()),this,SLOT(changeMa()));

	

	connect(ui.lookClass,SIGNAL(triggered()),this,SLOT(OnLookClass()));//�鿴�༶��
	connect(ui.lookStudent,SIGNAL(triggered()),this,SLOT(OnLookStudent()));//�鿴ѧ����
	connect(ui.lookMassage,SIGNAL(triggered()),this,SLOT(OnLookMassage()));//�鿴��ϸ��Ϣ
	

	
	connect(ui.treeWidget_2,SIGNAL(customContextMenuRequested(const QPoint&)), this,SLOT(massageMenu(const QPoint&)));//��ϸ���һ��˵�
	connect(ui.treeWidget_3,SIGNAL(customContextMenuRequested(const QPoint&)), this,SLOT(classMenu(const QPoint&)));//�༶���һ��˵�
	connect(ui.treeWidget,SIGNAL(customContextMenuRequested(const QPoint&)), this,SLOT(popMenu(const QPoint&)));//ѧ�����һ��˵�


	DaoStudent ds;
	StudentList li2;
	StudentList& li = li2;
	ds.findAllStudent(li,1);
	

	display1(li);


}

GXTXL_3::~GXTXL_3()
{

}
// ��ʾһ����¼
void GXTXL_3::display1(Student& record)
{
	QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeWidget);
	item->setText(0, QString("%1").arg(record.sno) );
	item->setText(1, QString(QString::fromLocal8Bit(record.sname.c_str())));
	item->setText(2, QString("%1").arg(record.classId));
	item->setText(3,QString(QString::fromLocal8Bit(record.ssex.c_str())));
	item->setText(4,QString("%1").arg(record.age));
	item->setData(0, Qt::UserRole, record.sno);// �����к�
}

// ��ʾ������¼
void GXTXL_3::display1(StudentList& records)
{
	ui.treeWidget->clear();
	for(StudentList::iterator iter = records.begin();
		iter != records.end(); iter ++)
	{
		Student& record = *iter;

		display1(record);
	}
}
//��ʾѧ��
void GXTXL_3::OnLookStudent(){
	ui.treeWidget_3->setVisible(false);
	ui.treeWidget_2->setVisible(false);
	ui.treeWidget->setVisible(true);
	ui.groupBox->setVisible(true);
	ui.groupBox_2->setVisible(true);

	ui.radioButton_3->setText(QString(QString::fromLocal8Bit("ѧ��")));
	ui.radioButton_4->setText(QString(QString::fromLocal8Bit("���")));
	ui.toolButton->setVisible(true);
	ui.toolButton_2->setVisible(false);
}
//��ѯѧ����ť����¼�
void GXTXL_3::OnCheck(bool checked){
	ui.treeWidget->clear();


	//ui.lineEdit->setText("�����");
	DaoStudent ds;
	StudentList li2;
	StudentList& li = li2;
	int a = 0;
	if (ui.radioButton_3->isChecked())
	{
		a=1;
	}else if (ui.radioButton_4->isChecked())
	{
		a=2;
	}else if (ui.radioButton_5->isChecked())
	{
		a=3;
	}else a=4;
	QString qs = ui.lineEdit->text();
	string tiao = string((const char *)qs.toLocal8Bit());
	
	
	//std::cout<<b<<std::endl;
	if (ui.radioButton->isChecked())
	{
		if (qs==NULL)
		{
			ds.findAllStudent(li,a);
			display1(li);
		}else{
			ds.findStudentByName(li,tiao,a);
			display1(li);
		}


	}else if (ui.radioButton_2->isChecked())
	{
		if (qs==NULL)
		{
			ds.findAllStudent(li,a);
			display1(li);
		}else{
			ds.findStudentByClass(li,tiao,a);
			display1(li);
		}
	}else{
		ds.findAllStudent(li,a);
		display1(li);

	}

	
}


//˫��ѧ�����¼�
void GXTXL_3::OnDoubleCheckItem( QTreeWidgetItem * item, int column){	
	QString qs = item->text(0);
	string str = string((const char *)qs.toLocal8Bit());	
	xianagxi* x = new xianagxi(0,str);
	x->show();
	
}

//����ѧ���˵��¼�
void GXTXL_3::popMenu(const QPoint &pos)
{
	QTreeWidgetItem* curItem=ui.treeWidget->currentItem();  //��ȡ��ǰ������Ľڵ�
	QString qs = curItem->text(0);
	string str = string((const char *)qs.toLocal8Bit());
		QAction deleteWell(QString::fromLocal8Bit("&ɾ��"),this);//ɾ����
		QAction reNameWell(QString ::fromLocal8Bit("&�޸�"),this);//��������
		//�ڽ�����ɾ����item
		connect(&deleteWell, SIGNAL(triggered()), this, SLOT(deleteItem()));
		connect(&reNameWell,SIGNAL(triggered()),this,SLOT(renameWell()));
		//QPoint pos=p;
		QMenu menu(ui.treeWidget);
		menu.addAction(&deleteWell);
		menu.addAction(&reNameWell);
		menu.exec(QCursor::pos());  //�ڵ�ǰ���λ����ʾ	
}
//ɾ��ѧ���¼�
void GXTXL_3::deleteItem()
{
	QTreeWidgetItem* curItem=ui.treeWidget->currentItem();  //��ȡ��ǰ������Ľڵ�
	QMessageBox::StandardButton rb = QMessageBox::question(NULL,QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("�Ƿ�ɾ����"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes); 
	if(rb == QMessageBox::Yes) 
	{ 
		int classId  = curItem->text(2).toInt();
		int sno = curItem->text(0).toInt();	
		DaoStudent ds;
		DaoClass dc;
		MyClass mc = dc.findById(classId);
		mc.number-=1;
		DaoMassage dm;
		dm.removeMassageBySno(sno);
		if (dc.updateClass(mc)&&ds.removeStudent(curItem->text(0).toInt()))
		{
			QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("ɾ���ɹ�"));
			delete curItem;
		}else
			QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("ɾ��ʧ��"));		 
	}
}

//�޸�ѧ���¼�
void GXTXL_3::renameWell()
{
	QTreeWidgetItem* item=ui.treeWidget->currentItem();  //��ȡ��ǰ������Ľڵ�
	int sno = item->text(0).toInt();
	updatestuui2 dlg(sno,this);
	if (QDialog::Accepted==dlg.exec())
	{
		DaoStudent dss;
		Student st = dss.findById(sno);
		item->setText(0, QString("%1").arg(st.sno) );
		item->setText(1, QString(QString::fromLocal8Bit(st.sname.c_str())));
		item->setText(2, QString("%1").arg(st.classId));
		item->setText(3,QString(QString::fromLocal8Bit(st.ssex.c_str())));
		item->setText(4,QString("%1").arg(st.age));
	}

}

void GXTXL_3::chSt(){
	updatestuui2 dlg(0,this);
	dlg.exec();
}


//���ѧ���¼�
void GXTXL_3::OnAddStu()
{
	Student result;
	AddstuUi2 dlg(&result,this);
	if (QDialog::Accepted==dlg.exec())
	{
		display1(result);

	}		
}
//��ʾ�༶�¼�
void GXTXL_3::OnLookClass(){
	ui.treeWidget->setVisible(false);
	ui.treeWidget_2->setVisible(false);
	ui.treeWidget_3->setVisible(true);
	ui.groupBox->setVisible(false);
	ui.groupBox_2->setVisible(false);
	ui.treeWidget_3->clear();
	ui.treeWidget_3->setContextMenuPolicy(Qt::CustomContextMenu);
	//ui.radioButton_4->setText(QString(QString::fromLocal8Bit("����")));
	DaoClass dc;
	ClassList cli2;
	ClassList &cl1 = cli2;
	dc.findAllClass(cl1,1);
	displayClass(cl1);
}
//չʾһ���༶
void GXTXL_3::displayClass(MyClass& cl){
	QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeWidget_3);
	item->setText(0, QString("%1").arg(cl.classId) );
	item->setText(1, QString(QString::fromLocal8Bit(cl.cName.c_str())));
	item->setText(2, QString("%1").arg(cl.number));
	item->setText(3,QString(QString::fromLocal8Bit(cl.monitor.c_str())));
	item->setText(4,QString(QString::fromLocal8Bit(cl.teacher.c_str())));
	// �����к�
	item->setData(0, Qt::UserRole, cl.classId);
}

//չʾ���а༶
void GXTXL_3::displayClass(ClassList& li){
	ui.treeWidget_3->clear();
	for(ClassList::iterator iter = li.begin();
		iter != li.end(); iter ++)
	{
		MyClass& record = *iter;
		displayClass(record);
	}
}
//�༶�˵�
void GXTXL_3::classMenu(const QPoint &pos){
	QTreeWidgetItem* curItem=ui.treeWidget_3->currentItem();  //��ȡ��ǰ������Ľڵ�
	QString qs = curItem->text(0);
	string str = string((const char *)qs.toLocal8Bit());
	QAction deleteClass(QString::fromLocal8Bit("&ɾ��"),this);//ɾ����
	QAction updateClass(QString::fromLocal8Bit("&�޸�"),this);	
	connect(&deleteClass, SIGNAL(triggered()), this, SLOT(OnDelClass()));
	connect(&updateClass, SIGNAL(triggered()), this, SLOT(OnUpdClass()));
	QMenu menu(ui.treeWidget_3);
	menu.addAction(&deleteClass);
	menu.addAction(&updateClass);
	menu.exec(QCursor::pos()); 

}

//ɾ���༶
void GXTXL_3::OnDelClass(){
	QTreeWidgetItem* curItem=ui.treeWidget_3->currentItem();  //��ȡ��ǰ������Ľڵ�
	QMessageBox::StandardButton rb = QMessageBox::question(NULL,QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("�Ƿ�ɾ����"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes); 
	if(rb == QMessageBox::Yes) 
	{ 
		DaoClass dc;
		int t = dc.removeClass(curItem->text(0).toInt());
		if (t)
		{			
			QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("ɾ���ɹ�"));
			delete curItem;
		}else
			QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("ɾ��ʧ��"));		
	}
}
//�޸İ༶
void GXTXL_3::OnUpdClass(){
	QTreeWidgetItem* item=ui.treeWidget_3->currentItem();  //��ȡ��ǰ������Ľڵ�
	int classId = item->text(0).toInt();
	updateclassui2 dlg(classId,this);
	if (QDialog::Accepted==dlg.exec())
	{
		DaoClass dss;
		MyClass cl = dss.findById(classId);
		item->setText(0, QString("%1").arg(cl.classId) );
		item->setText(1, QString(QString::fromLocal8Bit(cl.cName.c_str())));
		item->setText(2, QString("%1").arg(cl.number));
		item->setText(3,QString(QString::fromLocal8Bit(cl.monitor.c_str())));
		item->setText(4,QString(QString::fromLocal8Bit(cl.teacher.c_str())));
	}	
}
//�˵����޸İ༶
void GXTXL_3::OnUpdClassMain(){
	updateclassui2 dlg(0,this);
	dlg.exec();
}

//��Ӱ༶
void GXTXL_3::OnAddClass(){
	MyClass my;
	AddClassUi2 dlg(&my,this);
		if (QDialog::Accepted==dlg.exec())
		{
			displayClass(my);
		}
}

//չʾһ����ϸ��Ϣ
void GXTXL_3::displayMassage(massage& ma){
	QTreeWidgetItem* item = new QTreeWidgetItem(ui.treeWidget_2);
	item->setText(0, QString("%1").arg(ma.id));
	item->setText(1, QString("%1").arg(ma.sno));
	item->setText(2, QString("%1").arg(ma.classId));
	item->setText(3, QString(QString::fromLocal8Bit(ma.name.c_str())));
	item->setText(4, QString(QString::fromLocal8Bit(ma.sex.c_str())));
	item->setText(5, QString(QString::fromLocal8Bit(ma.card.c_str())));
	item->setText(6, QString(QString::fromLocal8Bit(ma.adress.c_str())));
	item->setText(7, QString(QString::fromLocal8Bit(ma.phone.c_str())));
	item->setText(8, QString(QString::fromLocal8Bit(ma.email.c_str())));
	item->setText(9, QString(QString::fromLocal8Bit(ma.post.c_str())));
	item->setData(0, Qt::UserRole, ma.id);
}
//չʾ������ϸ��Ϣ
void GXTXL_3::displayMassage(MassageList& li){
	ui.treeWidget_2->clear();
	for(MassageList::iterator iter = li.begin();
		iter != li.end(); iter ++)
	{
		massage& ma = *iter;
		displayMassage(ma);
	}
}
//�鿴��ϸ
void GXTXL_3::OnLookMassage(){
	ui.radioButton_3->setText(QString(QString::fromLocal8Bit("ID")));
	ui.radioButton_4->setText(QString(QString::fromLocal8Bit("���")));
	ui.toolButton->setVisible(false);
	ui.toolButton_2->setVisible(true);
	ui.groupBox_2->setVisible(true);
	ui.groupBox->setVisible(true);
	ui.treeWidget_3->setVisible(false);
	ui.treeWidget->setVisible(false);
	ui.treeWidget_2->setVisible(true);
	ui.treeWidget_2->setContextMenuPolicy(Qt::CustomContextMenu);

	DaoMassage dm;
	MassageList cli2;
	MassageList &cl1 = cli2;
	dm.findAll(cl1,1);
	displayMassage(cl1);
}

//��ϸҳ���һ��˵�
void GXTXL_3::massageMenu(const QPoint &pos){
	QTreeWidgetItem* curItem=ui.treeWidget_2->currentItem();  //��ȡ��ǰ������Ľڵ�
	QString qs = curItem->text(0);
	string str = string((const char *)qs.toLocal8Bit());
	QAction deleteMa(QString::fromLocal8Bit("&ɾ��"),this);//ɾ����
	QAction updateMa(QString ::fromLocal8Bit("&�޸�"),this);//��������
	//�ڽ�����ɾ����item
	connect(&deleteMa, SIGNAL(triggered()), this, SLOT(delMa()));
	connect(&updateMa,SIGNAL(triggered()),this,SLOT(upMa()));
	QMenu menu(ui.treeWidget);
	menu.addAction(&deleteMa);
	menu.addAction(&updateMa);
	menu.exec(QCursor::pos());  //�ڵ�ǰ���λ����ʾ
}
//ɾ����ϸ��Ϣ
void GXTXL_3::delMa(){
	QTreeWidgetItem* curItem=ui.treeWidget_2->currentItem();  //��ȡ��ǰ������Ľڵ�
	QMessageBox::StandardButton rb = QMessageBox::question(NULL,QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("�Ƿ�ɾ����"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes); 
	if(rb == QMessageBox::Yes) 
	{ 
		DaoMassage dm;
		int t = dm.removeMassage(curItem->text(0).toInt());
		if (t)
		{
			int classId = curItem->text(2).toInt();
			int sno = curItem->text(1).toInt();
			cout<<classId<<"   "<<sno;
			DaoStudent ds;
			ds.removeStudent(sno);
			DaoClass dc;
			MyClass mc = dc.findById(classId);
			mc.number-=1;
			dc.updateClass(mc);
			QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("ɾ���ɹ�"));
			delete curItem;
		}else
			QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("ɾ��ʧ��"));
	}
}
//�޸���ϸ��Ϣ
void GXTXL_3::upMa(){
	QTreeWidgetItem* item=ui.treeWidget_2->currentItem();  //��ȡ��ǰ������Ľڵ�
	int id = item->text(0).toInt();
	ChangeMassage2 dlg(id,this);
	if (QDialog::Accepted==dlg.exec())
	{
		DaoMassage dmm;
		massage ma = dmm.findById(id);
		item->setText(0, QString("%1").arg(ma.id));
		item->setText(1, QString("%1").arg(ma.sno));
		item->setText(2, QString("%1").arg(ma.classId));
		item->setText(3, QString(QString::fromLocal8Bit(ma.name.c_str())));
		item->setText(4, QString(QString::fromLocal8Bit(ma.sex.c_str())));
		item->setText(5, QString(QString::fromLocal8Bit(ma.card.c_str())));
		item->setText(6, QString(QString::fromLocal8Bit(ma.adress.c_str())));
		item->setText(7, QString(QString::fromLocal8Bit(ma.phone.c_str())));
		item->setText(8, QString(QString::fromLocal8Bit(ma.email.c_str())));
		item->setText(9, QString(QString::fromLocal8Bit(ma.post.c_str())));

	}
}

//��ϸ��Ϣ��ѯ��ť
void GXTXL_3::Oncheck2(bool checked){
	ui.treeWidget_2->clear();
	DaoMassage dm;
	MassageList li2;
	MassageList& li = li2;
	int a = 0;
	if (ui.radioButton_3->isChecked())
	{
		a=1;
	}else if (ui.radioButton_4->isChecked())
	{
		a=2;
	}else if (ui.radioButton_5->isChecked())
	{
		a=3;
	}else a=4;
	QString qs = ui.lineEdit->text();
	string tiao = string((const char *)qs.toLocal8Bit());
	if (ui.radioButton->isChecked())
	{
		if (qs==NULL)
		{
			dm.findAll(li,a);
			displayMassage(li);
		}else{
			dm.findByName(li,tiao,a);
			displayMassage(li);
		}


	}else if (ui.radioButton_2->isChecked())
	{
		if (qs==NULL)
		{
			dm.findAll(li,a);
			displayMassage(li);
		}else{
			dm.findByClass(li,tiao,a);
			displayMassage(li);
		}
	}else{
		dm.findAll(li,a);
		displayMassage(li);

	}
}

//�˵����޸���ϸ��Ϣ
void GXTXL_3::changeMa(){
	ChangeMassage2 dlg(0,this);
	dlg.exec();



}