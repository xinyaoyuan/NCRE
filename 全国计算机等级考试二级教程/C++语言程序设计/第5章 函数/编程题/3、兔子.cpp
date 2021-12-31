#include <iostream>
using namespace std;

/********************************
年份: 1 2 3 4 5 6 7 8 ...
数量: 1 1 1 2 3 4 6 9 ...
*********************************/

int tu(int n)
{
	if (n <= 3)
	{
		return 1;
	}

	return tu(n - 1) + tu(n - 3);
}

int main()
{
	int n;
	cin >> n;
	cout << tu(n) << endl;
	
	return 0;
}

