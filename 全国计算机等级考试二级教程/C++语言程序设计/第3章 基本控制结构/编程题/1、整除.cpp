#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n % 105 == 0)
	{
		cout << "同时被3、5、7整除" << endl;
	}
	else if (n % 15 == 0)
	{
		cout << "同时被3、5整除" << endl;
	}
	else if (n % 21 == 0)
	{
		cout << "同时被3、7整除" << endl;
	}
	else if (n % 35 == 0)
	{
		cout << "同时被5、7整除" << endl;
	}
	else if (n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
	{
		cout << "不能被3、5、7中任一个数整除" << endl;
	}

	return 0;
}

