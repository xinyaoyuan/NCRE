#include <iostream>
using namespace std;

int main()
{
	double d;
	char c;

	scanf("%lf%c", &d, &c);

	if (c == 'F')
	{
		cout << 5.0 / 9.0 * (d - 32) << 'C' << endl;
	}
	else if (c == 'C')
	{
		cout << 9.0 / 5.0 * d + 32 << 'F' << endl;
	}

	return 0;
}

