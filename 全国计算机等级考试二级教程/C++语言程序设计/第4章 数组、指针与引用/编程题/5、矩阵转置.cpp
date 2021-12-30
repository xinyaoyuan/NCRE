#include <iostream>
using namespace std;

int main()
{
	int a[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// 如果数值太大输出不好看
			a[i][j] = rand() % 10; 
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			swap(a[i][j], a[j][i]);
		}
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

