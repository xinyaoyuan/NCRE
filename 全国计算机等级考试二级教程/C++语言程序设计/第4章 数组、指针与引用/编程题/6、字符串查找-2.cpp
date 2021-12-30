#include <iostream>
using namespace std;

int main()
{
	char s[256], t[256];
	cin >> s >> t;
	
	// 在 s 中找 t
	int Ls = strlen(s), Lt = strlen(t);
	int Ks = 0, Kt = 0, idx = -1;
		
	for (int i = 0; i <= Ls - Lt; i++)
	{
		Ks = i;
		Kt = 0;
		
		while (Kt < Lt && s[Ks] == t[Kt])
		{
			Ks++;
			Kt++;
		}

		if (Kt == Lt)
		{
			idx = i;
		}
	}

	if (idx > -1)
	{
		cout << idx << endl;
	}
	else
	{
		cout << "none" << endl;		
	}

	return 0;
}

