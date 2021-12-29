#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (int i = 2; i <= 1000; i++)
	{
		int x = i * 2;
		int k = sqrt(i);
		for (int j = 1; j <= k; j++)
		{
			if (i % j == 0)
			{
				x -= j;
				if (j != i / j)
				{
					x -= i / j;
				}
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

