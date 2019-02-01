#include "gxtxl_3.h"
#include <QtGui/QApplication>
#include "Test.h"
#include "DaoStudent.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	
	QApplication a(argc, argv);
	GXTXL_3 w;
	w.show();
	
	//Test tt ;//= new Test();
	//tt.test2();
	/*Student sss;
	sss.age=10;
	sss.classId = 1001;
	sss.sname = "Àî½Ü";
	sss.sno = 20;
	sss.ssex = "ÄÐ";
	DaoStudent ds ;
	//int aaa = ds.updateStudent(sss);
	Student ssss= ds.findById(20000);
	std::cout<<ssss.sno<<"   "<<ssss.sname<<"   "<<ssss.classId<<"   "<<ssss.ssex<<"   "<<ssss.age;*/

	/*StudentList li2;
	StudentList& li = li2;
	DaoStudent ds;
	string nn = "1001";
	ds.findStudentByClass(li,nn,1);
	//cout<<li.size();
	for (int i = 0 ; i<li.size() ; i++)
	{
		std::cout<<li[i].sno<<"   "<<li[i].sname<<"   "<<li[i].classId<<"   "<<li[i].ssex<<"   "<<li[i].age<<std::endl;

	}*/
	

	//return 0;
	return a.exec();
}
