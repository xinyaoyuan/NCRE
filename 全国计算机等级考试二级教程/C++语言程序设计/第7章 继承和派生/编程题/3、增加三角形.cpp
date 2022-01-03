#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
	Shape(){}
	virtual ~Shape(){}
	
	virtual double area() const = 0;
	virtual void draw() const = 0;
};

class Point
{
public:
	Point(double dx, double dy):m_x(dx), m_y(dy){}
	
	double m_x;
	double m_y;
};

class TriAngle : public Shape
{
public:
	TriAngle(Point p1, Point p2, Point p3):
		m_p1(p1), 
		m_p2(p2), 
		m_p3(p3)
	{
	}
	virtual ~TriAngle(){}
	
	virtual	void draw() const
	{
		cout << "draw TriAngle" << endl;
	}
	
	virtual double area() const
	{
		double a = (m_p1.m_x - m_p2.m_x) * (m_p1.m_x - m_p2.m_x) +
				   (m_p1.m_y - m_p2.m_y) * (m_p1.m_y - m_p2.m_y);
		a = sqrt(a);
		
		double b = (m_p2.m_x - m_p3.m_x) * (m_p2.m_x - m_p3.m_x) +
				   (m_p2.m_y - m_p3.m_y) * (m_p2.m_y - m_p3.m_y);
		b = sqrt(b);
		
		double c = (m_p3.m_x - m_p1.m_x) * (m_p3.m_x - m_p1.m_x) +
				   (m_p3.m_y - m_p1.m_y) * (m_p3.m_y - m_p1.m_y);
		c = sqrt(c);
		
		double s = (a + b + c) / 2;
		
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
	
private:
	Point m_p1;
	Point m_p2;
	Point m_p3;
};

int main()
{
	Shape *tri = new TriAngle(Point(0, 0), Point(0, 3), Point(4, 0));
	tri->draw();
	cout << tri->area() << endl;
	
	return 0;
}

