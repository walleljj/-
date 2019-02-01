#ifndef _MASSAGE_H
#define _MASSAGE_H
#include <vector>
#include <string>
using namespace std;

class massage
{
public:
	massage(void);
	~massage(void);
public:
	int id;
	int sno;
	int classId;
	string name;
	string sex;
	string card;
	string adress;
	string phone;
	string email;
	string post;
	string photo;




};

typedef std::vector<massage> MassageList;
#endif