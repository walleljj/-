#include "DaoStudent.h"
#include <iostream>
#include <string>
#include <sstream>


using namespace std;

DaoStudent::DaoStudent(void)
{
	myDB.SetMySQLConInfo("localhost", "root", "admin", "txl", 3306);
	if (!myDB.Open())

	{
		printf("连接失败");

	}else
		printf("连接成功");
}
DaoStudent::~DaoStudent(void)
{
	myDB.Close();
	
}
int DaoStudent::addStudent(const Student& stu){
	string sql = "insert into student (sno,sname,classId,ssex,sage) values(";
	stringstream st;
	st<<sql<<stu.sno;st<<",'"<<stu.sname;st<<"',"<<stu.classId;st<<",'"<<stu.ssex<<"',"<<stu.age;st<<")";	
	sql = st.str();
	if (myDB.Query(sql))
	{
		return 1;
	}
	else{
		return 0;
	}
}
int DaoStudent::removeStudent(int id){
	string sql = "delete from student where sno=";
	stringstream st;
	st<<sql<<id;
	sql = st.str();
	if (myDB.Query(sql))
	{
		return 1;
	}
	else{
		return 0;
	}
}
int DaoStudent::updateStudent(const Student& stu){
	string sql = "update student set sno=";
	stringstream st;
	st<<sql<<stu.sno<<",sname='"<<stu.sname<<"',classId="<<stu.classId<<",ssex='"<<stu.ssex<<"',sage="<<stu.age<<" where sno="<<stu.sno;
	sql = st.str();
	cout<<sql;
	if (myDB.Query(sql))
	{
		return 1;
	}
	else{
		return 0;
	}

}
Student DaoStudent::findById(int id){
	string sql = "select * from student where sno=";
	stringstream st;
	st<<sql<<id;
	sql = st.str();
	cout<<sql<<endl;
	Student stu;
	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	if(data.size()>0){
		//cout<<data[0][0]<<data[0][1]<<data[0][2]<<data[0][3]<<data[0][4];
			istringstream is(data[0][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
			int sno; 
			is >> sno;
		stu.sno=sno;
		stu.sname=data[0][1];
			istringstream is2(data[0][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
			int classId; 
			is2 >> classId;
		stu.classId=classId;
		stu.ssex = data[0][3];
			istringstream is3(data[0][4]); //构造输入字符串流，流的内容初始化为“12”的字符串 
			int age; 
			is3 >> age;
		stu.age = age;
		return stu;

	}else{
		cout<<"没有找到";
		return stu;
	}
}
void DaoStudent::findAllStudent(StudentList& result,int by){//1.学号，2.班级，3.姓名

	string sql = "select * from student";
	if (by==1)
	{
		stringstream st;
		st<<sql<<" order by sno asc";		
		sql = st.str();
		//cout<<sql<<endl;

	}else if (by==2)
	{
		stringstream st;
		st<<sql<<" order by classId asc";
		sql = st.str();

	}else if (by==3)
	{
		stringstream st;
		st<<sql<<" order by sname asc";
		sql = st.str();
	}

	
	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	cout<<data.size()<<endl;
	for (unsigned int i = 0; i < data.size(); ++i)

	{
		Student stu;		
		istringstream is(data[i][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int sno; 
		is >> sno;
		stu.sno=sno;
		stu.sname=data[i][1];
		istringstream is2(data[i][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is2 >> classId;
		stu.classId=classId;
		stu.ssex = data[i][3];
		istringstream is3(data[i][4]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int age; 
		is3 >> age;
		stu.age = age;
		int ii = (int)i;

		//std::cout << std::endl;
		result.push_back(stu);

	}
}

void DaoStudent::findStudentByName(StudentList& result,std::string name,int by){
	string sql = "select * from student where sname like '%";
	stringstream stt;
	stt<<sql<<name<<"%'";
	sql = stt.str();


	if (by==1)
	{
		stringstream st;
		st<<sql<<" order by sno asc";		
		sql = st.str();
		//cout<<sql<<endl;

	}else if (by==2)
	{
		stringstream st;
		st<<sql<<" order by classId asc";
		sql = st.str();

	}else if (by==3)
	{
		stringstream st;
		st<<sql<<" order by sname asc";
		sql = st.str();
	}


	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	cout<<data.size()<<endl;
	for (unsigned int i = 0; i < data.size(); ++i)

	{
		Student stu;		
		istringstream is(data[i][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int sno; 
		is >> sno;
		stu.sno=sno;
		stu.sname=data[i][1];
		istringstream is2(data[i][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is2 >> classId;
		stu.classId=classId;
		stu.ssex = data[i][3];
		istringstream is3(data[i][4]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int age; 
		is3 >> age;
		stu.age = age;
		int ii = (int)i;

		//std::cout << std::endl;
		result.push_back(stu);

	}
}

void DaoStudent::findStudentByClass(StudentList& result,std::string className , int by){
	string sql = "select * from student where classId like '%";
	stringstream stt;
	stt<<sql<<className<<"%'";
	sql = stt.str();


	if (by==1)
	{
		stringstream st;
		st<<sql<<" order by sno asc";		
		sql = st.str();
		//cout<<sql<<endl;

	}else if (by==2)
	{
		stringstream st;
		st<<sql<<" order by classId asc";
		sql = st.str();

	}else if (by==3)
	{
		stringstream st;
		st<<sql<<" order by sname asc";
		sql = st.str();
	}


	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	cout<<data.size()<<endl;
	for (unsigned int i = 0; i < data.size(); ++i)

	{
		Student stu;		
		istringstream is(data[i][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int sno; 
		is >> sno;
		stu.sno=sno;
		stu.sname=data[i][1];
		istringstream is2(data[i][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is2 >> classId;
		stu.classId=classId;
		stu.ssex = data[i][3];
		istringstream is3(data[i][4]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int age; 
		is3 >> age;
		stu.age = age;
		int ii = (int)i;

		//std::cout << std::endl;
		result.push_back(stu);





}
}