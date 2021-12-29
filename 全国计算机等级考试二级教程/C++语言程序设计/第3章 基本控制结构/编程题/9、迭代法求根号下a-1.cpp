#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// 输入a
	double a;
	cin >> a;
	
	// 特殊情况处理
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
	
	// 迭代计算
	double Xn  = a;
	double Xn1 = 0.0;
	
	while (1)
	{
		Xn1 = 0.5 * (Xn + a / Xn);
		if (fabs(Xn1 - Xn) < 1.0e-7)
		{
			break;
		}
		Xn = Xn1;
	}
	
	cout << Xn1 << endl;
	
	return 0;
}

