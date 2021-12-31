#include <iostream>
using namespace std;

int m = 0;
void reverse(int n)
{
	if (n)
	{
		m *= 10;
		m += n % 10;
		reverse(n / 10);
	}
}

int main()
{
	int n;
	cin >> n;
	reverse(n);
	cout << m << endl;

	return 0;
}

