#include <iostream>
using namespace std;

int main()
{
	// 零的阶乘 0! = 1
	double e = 1.0;
	double v = 1.0;
	for (int i = 1; i <= 49; i++)
	{
		v *= (1.0 / i);
		e += v;
	}
	cout << e << endl;
	
	return 0;
}

