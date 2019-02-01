#include "DlgNew.h"
#include "GBK.h"

DlgNew::DlgNew(Student* result, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_result = result;


	connect(ui.m_btnOK, SIGNAL(clicked()), this, SLOT(onBtnOK()));
	connect(ui.m_btnCancel, SIGNAL(clicked()), this, SLOT(onBtnCancel()));

	// 正则表达式: 限制输入数字
	QValidator *v1 = new QRegExpValidator(QRegExp("^\\d{11}$"), this);
	ui.m_ctlCellphone->setValidator(v1);

	QValidator *v2 = new QRegExpValidator(QRegExp("^\\d{6}$"), this);
	ui.m_ctlId->setValidator(v2);
}

DlgNew::~DlgNew()
{

}

int DlgNew::onBtnOK()
{
	// 取得值
	m_result->id = ui.m_ctlId->text().toInt();
	
	string text = GBK::FromUnicode(ui.m_ctlName->text());
	strcpy(m_result->name, text.c_str());

	text = GBK::FromUnicode(ui.m_ctlCellphone->text());
	strcpy(m_result->cellphone, text.c_str());

	// 关闭对话框
	accept(); 
	return 0;
}

int DlgNew::onBtnCancel()
{
	reject();
	return 0;
}

