#ifndef _DATE_SOURCE_H
#define _DATE_SOURCE_H
#include "Student.h"
#include "MYSQLInterface.h"


class DaoStudent
{
public:
	DaoStudent(void);
	~DaoStudent(void);
public:
	int addStudent(const Student& stu);
	int removeStudent(int id);
	int updateStudent(const Student& stu);
	Student findById(int id);
	void findAllStudent(StudentList& result,int by);
	void findStudentByName(StudentList& result,std::string name,int by);
	void findStudentByClass(StudentList& result,std::string className , int by);


	StudentList& list(){return m_records;}
private:
	StudentList m_records;
	MySQLInterface myDB;

};
#endif