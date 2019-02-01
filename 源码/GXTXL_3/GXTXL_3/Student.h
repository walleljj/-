#ifndef _STUDENT_H
#define _STUDENT_H
#include <vector>
#include <string>
using namespace std;

class Student
{
public:
	Student();
	Student(Student* s);
	~Student(void);
public:
	int sno;
	string sname;
	int classId;
	string ssex;
	int age;


};
typedef std::vector<Student> StudentList;


#endif