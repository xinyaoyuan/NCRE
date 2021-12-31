#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	// 记录 key
	char *key = nullptr;
	if (argc > 1)
	{
		key = argv[1];
	}
	
	int len = 0;
	if (key)
	{
		len = strlen(key);
	}
	
	// 输入明文
	char c[256];
	cin >> c;
	
	// 输出密文
	int L = strlen(c);
	for (int i = 0; i < L; i++)
	{
		if (len)
		{
			c[i] ^= key[i % len];
		}

		cout << c[i];
	}
	
	return 0;
}

