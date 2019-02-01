#ifndef _MYCLASS_H
#define _MYCLASS_H
#include <vector>
#include <string>
using namespace std;

class MyClass
{
public:
	MyClass();
	~MyClass();
public:
	int classId;
	string cName;
	int number;
	string monitor;
	string teacher;


};
typedef std::vector<MyClass> ClassList;


#endif