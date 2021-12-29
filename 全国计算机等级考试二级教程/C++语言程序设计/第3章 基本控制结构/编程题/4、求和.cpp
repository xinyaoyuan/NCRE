#include <iostream>
using namespace std;

int main()
{
	int val = 0;
	for (int i = 1; i <= 51; i++)
	{
		if (i % 2)
		{
			val += (2 * i - 1);
		}
		else
		{
			val -= (2 * i - 1);
		}
	}

	cout << val << endl;

	return 0;
}

