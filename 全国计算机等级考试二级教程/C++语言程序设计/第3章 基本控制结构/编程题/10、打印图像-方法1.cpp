#include <iostream>
using namespace std;

int main()
{
	// 输出上三角形
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 4 - i; j++)
		{
			cout << "  ";
		}

		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	// 输出中部横线
	cout << "* * * * * * *" << endl;
	
	// 输出下三角形
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "  ";
		}
		for (int j = 1; j <= 2 * (4 - i) - 1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}

