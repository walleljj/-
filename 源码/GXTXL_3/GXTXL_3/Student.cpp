#include "Student.h"

Student::Student(void)
{
}
Student::Student(Student* s){
	this->age = s->age;
	this->classId = s->classId;
	this->sname = s->sname;
	this->sno = s->sno;
	this->ssex = s->ssex;
}

Student::~Student(void)
{
}
