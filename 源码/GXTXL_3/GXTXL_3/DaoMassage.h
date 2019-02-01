#ifndef _DAOMASSAGE_H
#define _DAOMASSAGE_H
#include "MYSQLInterface.h"
#include "massage.h"
#include "Student.h"
class DaoMassage
{
public:
	DaoMassage(void);
	~DaoMassage(void);
	int addMassage(const Student& stu);
	int removeMassage(int id);
	int removeMassageBySno(int sno);
	int updateMassage(const massage& ma);
	massage findById(int id);
	massage findBySno(int id);
	void findAll(MassageList& mli,int by);
	void findByName(MassageList& mli , std::string name , int by);
	void findByClass(MassageList& mli , std::string classId , int by);
	MassageList& list(){return m_list;}
private:
	MassageList m_list;
	MySQLInterface myDB;

};
#endif