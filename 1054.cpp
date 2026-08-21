#include<iostream>
#include<iomanip>
#include <string>
#include <cctype>
using namespace std;
bool iv(const string& s, double& v)
{
	int i = 0;
	if (i < s.size() && (s[i] == '+' || s[i] == '-'))i++;
	if (i >= s.size() || !isdigit(s[i]))return false;
	int digits = 0;
	while (i < s.size() && isdigit(s[i]))
	{
		digits++;
		i++;
	}
	int frac = 0;
	if (i < s.size() && s[i] == '.')
	{
		i++;
		while (i < s.size() && isdigit(s[i]))
		{
			frac++;
			if (frac > 2) return false;
			i++;
		}
	}
	if (i != s.size())return false;
	v = atof(s.c_str());
	if (v < -1000 || v > 1000)return false;
	return true;
}
int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		double v;
		if (iv(s, v)) { sum += v; cnt++; }
		else cout << "ERROR: " << s << " is not a legal number" << "\n";
	}
	if (cnt == 0)
		cout << "The average of 0 numbers is Undefined" << "\n";
	else
	{
		cout << "The average of " << cnt
			<< (cnt == 1 ? " number is " : " numbers is ")
			<< fixed << setprecision(2) << sum / cnt << "\n";
	}
}