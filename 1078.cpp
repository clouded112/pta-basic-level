#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	char c;
	cin >> c;
	getchar();
	string s;
	getline(cin, s);
	if (c == 'C')
	{
		for (int i = 0; i < s.size();)
		{
			int j = i;
			while (j < (int)s.size() && s[j] == s[i])j++;
			int cnt = j - i;
			if (cnt > 1)cout << cnt;
			cout << s[i];
			i = j;
		}
	}
	else
	{
		for (int i = 0; i < (int)s.size();)
		{
			if (isdigit(s[i]))
			{
				int num = 0;
				while (i < (int)s.size() && isdigit(s[i]))
				{
					num = num * 10 + (s[i] - '0');
					i++;
				}
				char ch = s[i];
				while (num--) cout << ch;
				i++;
			}
			else cout << s[i++];
		}
	}
	cout << "\n";
}