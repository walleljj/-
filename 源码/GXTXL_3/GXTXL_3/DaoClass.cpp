#include "DaoClass.h"
#include <iostream>
#include <string>
#include <sstream>


using namespace std;

DaoClass::DaoClass(void)
{
	myDB.SetMySQLConInfo("localhost", "root", "admin", "txl", 3306);

	if (!myDB.Open())

	{

		printf("连接失败");

	}else
		printf("连接成功");

}

DaoClass::~DaoClass(void)
{
	myDB.Close();

}
int DaoClass::addClass(const MyClass& cla){
	string sql = "insert into class (classId,cName,number,monitor,teacher) values(";
	stringstream st;
	st<<sql<<cla.classId<<",'"<<cla.cName<<"',"<<cla.number<<",'"<<cla.monitor<<"','"<<cla.teacher<<"')";	
	sql = st.str();
	if (myDB.Query(sql))
	{
		return 1;
	}
	else{
		return 0;
	}

}
int DaoClass::removeClass(int id){
	string sql = "delete from class where classId=";
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
int DaoClass::updateClass(const MyClass& cla){
	string sql = "update class set classId=";
	stringstream st;
	st<<sql<<cla.classId<<",cName='"<<cla.cName<<"',number="<<cla.number<<",monitor='"<<cla.monitor<<"',teacher='"<<cla.teacher<<"' where classId="<<cla.classId;
	sql = st.str();
	//cout<<sql;
	if (myDB.Query(sql))
	{
		return 1;
	}
	else{
		return 0;
	}

}
MyClass DaoClass::findById(int id){
	string sql = "select * from class where classId=";
	stringstream st;
	st<<sql<<id;
	sql = st.str();
	//cout<<sql<<endl;
	MyClass cla;
	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	if(data.size()>0){
		//cout<<data[0][0]<<data[0][1]<<data[0][2]<<data[0][3]<<data[0][4];
		istringstream is(data[0][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is >> classId;
		cla.classId=classId;
		cla.cName=data[0][1];
		istringstream is2(data[0][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int number; 
		is2 >> number;
		cla.number = number;
		cla.monitor = data[0][3];
		cla.teacher = data[0][4];
		return cla;

	}else{
		//cout<<"没有找到";
		return cla;
	}
}
void DaoClass::findAllClass(ClassList& result,int by){//1.班号，2人数，3.班主任

	string sql = "select * from class";
	if (by==1)
	{
		stringstream st;
		st<<sql<<" order by classId asc";		
		sql = st.str();
		cout<<sql<<endl;

	}else if (by==2)
	{
		stringstream st;
		st<<sql<<" order by number asc";
		sql = st.str();

	}else if (by==3)
	{
		stringstream st;
		st<<sql<<" order by teacher asc";
		sql = st.str();
	}


	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	//cout<<data.size()<<endl;
	for (unsigned int i = 0; i < data.size(); ++i)

	{
		MyClass cla;		
		istringstream is(data[i][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is >> classId;
		cla.classId=classId;
		cla.cName=data[i][1];
		istringstream is2(data[i][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int number; 
		is2 >> number;
		cla.number = number;
		cla.monitor = data[i][3];
		cla.teacher = data[i][4];
		int ii = (int)i;

		//std::cout << std::endl;
		result.push_back(cla);

	}
}