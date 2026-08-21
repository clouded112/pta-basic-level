#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string gw[] = { "tret", "jan", "feb", "mar", "apr", "may", "jun","jly", "aug", "sep", "oct", "nov", "dec" };
	string sw[] = { "", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; ++i)
	{
		string s;
		getline(cin, s);
		if (isdigit(s[0]))
		{
			int num = stoi(s);
			int t = num / 13;
			int u = num % 13;
			if (t > 0)
			{
				cout << sw[t];
				if (u != 0) cout << " " << gw[u];
				cout << endl;
			}
			else cout << gw[u] << endl;
		}
		else
		{
			int pos = s.find(' ');
			int ans = 0;
			if (pos == string::npos)
			{
				for (int j = 0; j < 13; ++j)
				{
					if (s == gw[j]) ans = j;
					if (j > 0 && s == sw[j]) ans = j * 13;
				}
			}
			else
			{
				string fi = s.substr(0, pos);
				string se = s.substr(pos + 1);
				for (int j = 1; j < 13; ++j)
					if (fi == sw[j]) ans += j * 13;
				for (int j = 0; j < 13; ++j)
					if (se == gw[j]) ans += j;
			}
			cout << ans << endl;
		}
	}
	return 0;
}