#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		int x = i;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				x -= j;
			}
		}
	
		// 如果x为0表明i的所有真因子之和为i	
		if (!x)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}

