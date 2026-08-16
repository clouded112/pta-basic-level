#include<iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int pos = s.find('E');
	string xs = s.substr(3, pos - 3);
	int sign = (s[pos + 1] == '-') ? -1 : 1;
	int exp = 0;
	for (int i = pos+2; i < s.size(); i++)
	{
		exp = exp * 10 + (s[i] - '0');
	}
	exp = sign * exp;
	if (s[0]=='-')cout << "-";
	string all = string(1, s[1]) + xs;
	if (exp < 0)
	{
		cout << "0.";
		for (int i = 0; i < -exp - 1; i++)cout << '0';
		cout << all;
	}
	else
	{
		if (exp + 1 >= all.size())
		{
			cout << all;
			for (int i = 0; i < exp+1-all.size(); i++)
			{
				cout << "0";
			}
		}
		else
		{
			cout << all.substr(0, exp + 1) << '.' << all.substr(exp + 1);
		}
	}
}