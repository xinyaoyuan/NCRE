#include <iostream>
#include <cstdio>
using namespace std;

class Time
{
public:
	Time():m_h(0), m_m(0), m_s(0)
	{
	}
	
	Time(int h, int m, int s):m_h(h), m_m(m), m_s(s)
	{
	}

	~Time()
	{
	}

	void setHour(int h)
	{
		m_h = h;
	}
	
	int  getHour() const
	{
		return m_h;
	}

	void setMinute(int m)
	{
		m_m = m;
	}

	int  getMinute() const
	{
		return m_m;
	}

	void setSecond(int s)
	{
		m_s = s;
	}
	
	int  getSecond() const
	{
		return m_s;
	}
	
	void print()
	{
		printf("%02d:%02d:%02d\n", m_h, m_m, m_s);
	}
	
	void printEx()
	{
		if (m_h >= 12)
		{
			printf("%02d:%02d:%02d PM\n", m_h % 12, m_m, m_s);
		}
		else
		{
			printf("%02d:%02d:%02d AM\n", m_h, m_m, m_s);
		}				
	}

private:
	int m_h; //	时
	int m_m; //	分
	int m_s; // 秒
};

int main()
{
	Time t1;
	t1.print();
	t1.printEx();
		
	Time t2(23, 7, 16);
	t2.print();
	t2.printEx();
	
	Time t3(12, 0, 0);
	t3.print();
	t3.printEx();
		
	return 0;
}

