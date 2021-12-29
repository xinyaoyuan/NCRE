#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// 输入a
	double a;
	cin >> a;

	// 处理特殊情况
	if (a == 0.0)
	{
		cout << 0 << endl;
		return 0;
	}

	if (a < 0.0)
	{
		cout << "error" << endl;
		return 0;
	}

	// 初始化
	double Xn  = a;
	double Xn1 = 0.5 * (Xn + 1);

	// 迭代计算
	while (fabs(Xn1 - Xn) >= 1.0e-7)
	{
		Xn  = Xn1;
		Xn1 = 0.5 * (Xn + a / Xn); 
	}

	cout << Xn1 << endl;

	return 0;
}

