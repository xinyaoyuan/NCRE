#include <iostream>
using namespace std;

int main()
{
	double x, y, z, t;
	cin >> x >> y >> z;
	if (y > x)
	{
		t = x;
		x = y;
		y = t;
	}

	if (z > y)
	{
		t = y;
		y = z;
		z = t;
	}

	if (y > x)
	{
		t = x;
		x = y;
		y = t;
	}

	cout << x << " " << z << endl;

	return 0;
}

