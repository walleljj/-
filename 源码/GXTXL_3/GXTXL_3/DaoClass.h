#ifndef _DAOCLASS_H
#define _DAOCLASS_H
#include "MyClass.h"
#include "MYSQLInterface.h"


class DaoClass
{
public:
	DaoClass(void);
	~DaoClass(void);
public:
	int addClass(const MyClass& cla);
	int removeClass(int id);
	int updateClass(const MyClass& cla);
	MyClass findById(int id);
	void findAllClass(ClassList& result,int by);
	ClassList& list(){return m_records;}
private:
	ClassList m_records;
	MySQLInterface myDB;

};
#endif