#include "DaoMassage.h"
#include <iostream>
#include <string>
#include <sstream>

DaoMassage::DaoMassage(void)
{
	myDB.SetMySQLConInfo("localhost", "root", "admin", "txl", 3306);

	if (!myDB.Open())

	{

		printf("连接失败");

	}else
		printf("连接成功");
}

DaoMassage::~DaoMassage(void)
{
	myDB.Close();
}
int DaoMassage::addMassage(const Student& stu){
	string sql = "insert into massage (sno,name,classId,sex) values(";
	stringstream st;
	st<<sql<<stu.sno;st<<",'"<<stu.sname;st<<"',"<<stu.classId;st<<",'"<<stu.ssex<<"')";	
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
int DaoMassage::removeMassage(int id){

	string sql = "delete from massage where id=";
	stringstream st;
	st<<sql<<id;
	sql = st.str();
	if (myDB.Query(sql))
	{
		//update massage set sno=111,classId=45654,name='1',sex='1',card='1',adress='1',phone='1',email='1',post='1',photo='1' where id=3005
		return 1;
	}
	else{
		return 0;
	}
}
int DaoMassage::removeMassageBySno(int sno){

	string sql = "delete from massage where sno=";
	stringstream st;
	st<<sql<<sno;
	sql = st.str();
	if (myDB.Query(sql))
	{
		//update massage set sno=111,classId=45654,name='1',sex='1',card='1',adress='1',phone='1',email='1',post='1',photo='1' where id=3005
		return 1;
	}
	else{
		return 0;
	}
}
int DaoMassage::updateMassage(const massage& ma){
	string sql = "update massage set sno=";
	stringstream st;
	st<<sql<<ma.sno<<",classId="<<ma.classId<<",name='"<<ma.name<<"',sex='"<<ma.sex<<"',card='"<<ma.card<<"',adress='"<<ma.adress<<"',phone='"<<ma.phone<<"',emial='"<<ma.email<<"',post='"<<ma.post<<"',photo='"<<ma.photo<<"'"<<" where id="<<ma.id;
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
massage DaoMassage::findById(int id){

	string sql = "select * from massage where id=";
	stringstream st;
	st<<sql<<id;
	sql = st.str();
	cout<<sql<<endl;
	massage ma;
	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	if(data.size()>0){
		//cout<<data[0][0]<<data[0][1]<<data[0][2]<<data[0][3]<<data[0][4];
		istringstream is(data[0][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int id; 
		is >> id;
		ma.id = id;
		istringstream is2(data[0][1]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int sno; 
		is2 >> sno;
		ma.sno = sno;
		istringstream is3(data[0][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is3 >> classId;
		ma.classId = classId;
		ma.name = data[0][3];
		ma.sex = data[0][4];
		ma.card = data[0][5];
		ma.adress = data[0][6];
		ma.phone = data[0][7];
		ma.email = data[0][8];
		ma.post = data[0][9];
		ma.photo = data[0][10];
		
		return ma;

	}else{
		cout<<"没有找到";
		return ma;
	}
}
void DaoMassage::findByName(MassageList& mli , std::string name , int by){
	string sql = "select * from massage where name like '%";
	stringstream stt;
	stt<<sql<<name<<"%'";
	sql = stt.str();
	if (by==1)
	{
		stringstream st;
		st<<sql<<" order by id asc";		
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
		st<<sql<<" order by name asc";
		sql = st.str();
	}
	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	cout<<data.size()<<endl;
	for (unsigned int i = 0; i < data.size(); ++i)

	{
		massage ma;		
		istringstream is(data[i][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int id; 
		is >> id;
		ma.id = id;
		istringstream is2(data[i][1]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int sno; 
		is2 >> sno;
		ma.sno = sno;
		istringstream is3(data[i][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is3 >> classId;
		ma.classId = classId;
		ma.name = data[i][3];
		ma.sex = data[i][4];
		ma.card = data[i][5];
		ma.adress = data[i][6];
		ma.phone = data[i][7];
		ma.email = data[i][8];
		ma.post = data[i][9];
		ma.photo = data[i][10];
		//std::cout << std::endl;
		mli.push_back(ma);
	}
}
void DaoMassage::findByClass(MassageList& mli , std::string classId , int by){
	string sql = "select * from massage where classId like '%";
	stringstream stt;
	stt<<sql<<classId<<"%'";
	sql = stt.str();
	if (by==1)
	{
		stringstream st;
		st<<sql<<" order by id asc";		
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
		st<<sql<<" order by name asc";
		sql = st.str();
	}
	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	cout<<data.size()<<endl;
	for (unsigned int i = 0; i < data.size(); ++i)

	{
		massage ma;		
		istringstream is(data[i][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int id; 
		is >> id;
		ma.id = id;
		istringstream is2(data[i][1]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int sno; 
		is2 >> sno;
		ma.sno = sno;
		istringstream is3(data[i][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is3 >> classId;
		ma.classId = classId;
		ma.name = data[i][3];
		ma.sex = data[i][4];
		ma.card = data[i][5];
		ma.adress = data[i][6];
		ma.phone = data[i][7];
		ma.email = data[i][8];
		ma.post = data[i][9];
		ma.photo = data[i][10];
		//std::cout << std::endl;
		mli.push_back(ma);
	}



}

void DaoMassage::findAll(MassageList& mli  , int by){
	string sql = "select * from massage";
	
	if (by==1)
	{
		stringstream st;
		st<<sql<<" order by id asc";		
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
		st<<sql<<" order by name asc";
		sql = st.str();
	}
	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	cout<<data.size()<<endl;
	for (unsigned int i = 0; i < data.size(); ++i)

	{
		massage ma;		
		istringstream is(data[i][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int id; 
		is >> id;
		ma.id = id;
		istringstream is2(data[i][1]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int sno; 
		is2 >> sno;
		ma.sno = sno;
		istringstream is3(data[i][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is3 >> classId;
		ma.classId = classId;
		ma.name = data[i][3];
		ma.sex = data[i][4];
		ma.card = data[i][5];
		ma.adress = data[i][6];
		ma.phone = data[i][7];
		ma.email = data[i][8];
		ma.post = data[i][9];
		ma.photo = data[i][10];
		//std::cout << std::endl;
		mli.push_back(ma);
	}



}
massage DaoMassage::findBySno(int sno){

	string sql = "select * from massage where sno=";
	stringstream st;
	st<<sql<<sno;
	sql = st.str();
	cout<<sql<<endl;
	massage ma;
	std::vector<std::vector<std::string> > data;
	myDB.Select(sql,data);
	if(data.size()>0){
		//cout<<data[0][0]<<data[0][1]<<data[0][2]<<data[0][3]<<data[0][4];
		istringstream is(data[0][0]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int id; 
		is >> id;
		ma.id = id;
		istringstream is2(data[0][1]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int sno; 
		is2 >> sno;
		ma.sno = sno;
		istringstream is3(data[0][2]); //构造输入字符串流，流的内容初始化为“12”的字符串 
		int classId; 
		is3 >> classId;
		ma.classId = classId;
		ma.name = data[0][3];
		ma.sex = data[0][4];
		ma.card = data[0][5];
		ma.adress = data[0][6];
		ma.phone = data[0][7];
		ma.email = data[0][8];
		ma.post = data[0][9];
		ma.photo = data[0][10];

		return ma;

	}else{
		cout<<"没有找到";
		return ma;
	}
}