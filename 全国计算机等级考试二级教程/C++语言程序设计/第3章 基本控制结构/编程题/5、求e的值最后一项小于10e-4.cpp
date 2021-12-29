#include <iostream>
using namespace std;

int main()
{
	// 零的阶乘 0! = 1
	double e = 1.0;
	double v = 1.0;
	int i = 1;
	while (v >= 1.0e-4)
	{
		v *= (1.0 / i);
		e += v;

		i++;
	}
	cout << e << endl;
	
	return 0;
}

