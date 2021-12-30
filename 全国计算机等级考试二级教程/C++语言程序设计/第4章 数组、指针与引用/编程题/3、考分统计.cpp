#include <iostream>
using namespace std;

int main()
{
	char c[30][8];
	int n;
	cin >> n;
	
	double s[30], total = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> c[i] >> s[i];
		total += s[i];
	}

	// 最高分及索引
	double Max = s[0];
	int MaxIdx = 0;

	// 平均分
	double average = 1.0 * total / n;
	cout << average << endl;
	
	for (int i = 0; i < n; i++)
	{
		// 小于平均分的学生姓名
		if (s[i] < average)
		{
			cout << c[i] << endl;
		}
		
		if (s[i] > Max)
		{
			Max = s[i];
			MaxIdx = i;
		}
	}
	
	// 最高分及姓名
	cout << Max << " " << c[MaxIdx] << endl;
	
	return 0;
}

