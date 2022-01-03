#include <iostream>
using namespace std;

class Building
{
public:
	Building(){}
	~Building(){}
	
	int m_level;
	int m_room;
	int m_area;	
};

class House : public Building
{
public:
	House(){}
	~House(){}
	
	int m_bedroom;
	int m_showerroom;
};

class Office : public Building
{
public:
	Office(){}
	~Office(){}
	
	int m_fireextinguisher;
	int m_phone;
};

int main()
{
	
	return 0;
}

