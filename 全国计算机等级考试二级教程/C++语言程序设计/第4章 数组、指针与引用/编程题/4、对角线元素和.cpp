#include <iostream>
using namespace std;

int main()
{
	int a, n, total = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a;
			if (i == j || i + j == n - 1)
			{
				total += a;
			}
		}
	}

	cout << total << endl;

	return 0;
}

