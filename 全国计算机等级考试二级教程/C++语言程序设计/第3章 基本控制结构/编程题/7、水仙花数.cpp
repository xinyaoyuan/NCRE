#include <iostream>
using namespace std;

int main()
{
	int x, y, z, v;
	for (int i = 100; i <= 999; i++)
	{
		x = (i / 1  ) % 10;
		y = (i / 10 ) % 10;
		z = (i / 100) % 10;
		
		v = i;
		v -= x * x * x;
		v -= y * y * y;
		v -= z * z * z;
		
		if (!v)
		{
			cout << i << endl;
		}
	}

	return 0;
}

