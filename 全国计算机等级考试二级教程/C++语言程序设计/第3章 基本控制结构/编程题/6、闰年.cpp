#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	
	for (int i = 1600; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			cout << i << " ";
			count++;
			
			if (count % 5 == 0)
			{
				cout << endl;
			}
		}
	}

	return 0;
}

