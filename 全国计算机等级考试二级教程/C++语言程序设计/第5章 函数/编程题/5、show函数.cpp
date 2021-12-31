#include <iostream>
using namespace std;

void show(int n)
{
	cout << "int:" << n << endl;
}

void show(char a)
{
	cout << "A char:" << a << endl;
}

int main()
{
	int   a = 10;
	float b = 3.14;
	char  c = 'W';
	short d = 90;
	
	show(a);
	// show(b);	// 调用失败
	show(c);
	show(d);

	return 0;
}

