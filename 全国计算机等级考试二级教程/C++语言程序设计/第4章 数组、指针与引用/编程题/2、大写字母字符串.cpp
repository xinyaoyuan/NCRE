#include <iostream>
using namespace std;

int main()
{
	char c[256];
	cin >> c;

	int det = 'a' - 'A';

	int len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= det;
		}
		cout << c[i];
	}

	return 0;
}

