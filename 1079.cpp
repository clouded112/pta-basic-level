#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string add(string& a, string& b)
{
	string x;
	int c = 0;
	for (int i = (int)a.size() - 1; i >= 0; i--)
	{
		int sum = (a[i] - '0') + (b[i] - '0') + c;
		x += char(sum % 10 + '0');
		c = sum / 10;
	}
	if (c)x += '1';
	reverse(x.begin(), x.end());
	return x;
}
bool ok(string s)
{
	string t = s;
	reverse(t.begin(), t.end());
	return t == s;
}
int main()
{
	string s;
	cin >> s;
	if (ok(s))
	{
		cout << s << " is a palindromic number.";
		return 0;
	}
	for (int i = 0; i < 10; i++)
	{
		string a = s;
		reverse(s.begin(), s.end());
		string b = s;
		s = add(a, b);
		cout << a << " + " << b << " = " << s << "\n";
		if (ok(s))
		{
			cout << s << " is a palindromic number.";
			return 0;
		}
	}
	cout << "Not found in 10 iterations.";
	return 0;
}