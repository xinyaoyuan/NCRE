#include <iostream>
using namespace std;

int main()
{
	int a[] = {17, 85, 67, 83, 65, 49, 26, 92, 38, 42};
	int Max = a[0], MaxIdx = 0;
	int Min = a[0], MinIdx = 0;

	for (int i = 1; i < 10; i++)
	{
		if (a[i] > Max)
		{
			Max = a[i];
			MaxIdx = i;
		}
		else if (a[i] < Min)
		{
			Min = a[i];
			MinIdx = i;
		}
	}

	cout << Max << " " << MaxIdx << endl;
	cout << Min << " " << MinIdx << endl;

	return 0;
}

