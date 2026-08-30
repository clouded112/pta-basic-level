#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int n;
	cin >> s >> n;
	for (int i = 1; i < n; i++)
	{
		string t;
		int cnt = 1;
		for (int j = 1; j <= (int)s.size(); j++)
		{
			if (j < (int)s.size() && s[j] == s[j - 1]) cnt++;
			else
			{
				t += s[j - 1];
				t += to_string(cnt);
				cnt = 1;
			}
		}
		s = t;
	}
	cout << s <<"\n";
	return 0;
}