#include <iostream>
using namespace std;

char c[32];
void itoa(int n, char *c)
{
	if (n)
	{
		c[0] = '0' + n % 10;
		n /= 10;

		itoa(n, c + 1);
	}
}

int main()
{
	int n;
	cin >> n;
	
	// 转换
	itoa(n, c);
	
	// 翻转字符串c
	int i = 0, j = strlen(c) - 1;
	while (i < j)
	{
		swap(c[i], c[j]);
		i++;
		j--;
	}
	cout << c << endl;
	
	return 0;
}

