#include <iostream>
#include <cstring>
using namespace std;

class person
{
public:
	person(){}
	~person(){}
	
	string m_name;	// 姓名 
	string m_id;	// ID
	int    m_sex;	// 性别
	int	   m_age;	// 年龄
};

class student : public person
{
public:
	student(){}
	~student(){}
	
	string m_number;	// 学号
	string m_class;		// 班级
};

class teacher : public person
{
public:
	teacher(){}
	~teacher(){}
};

class officeclerk : public person
{
public:
	officeclerk(){}
	~officeclerk(){}
};

int main()
{
	
	return 0;
}

