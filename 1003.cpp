#include <iostream>
#include <string>
using namespace std;
bool ok(const string& s)
{
	int cP = 0, cT = 0;
	for (char c:s)
	{
		if (c != 'P' && c != 'A' && c != 'T') return false;
		if (c == 'P')cP++;
		if (c == 'T')cT++;
	}
	if (cP != 1 || cT != 1) return false;
	int p=s.find('P');
	int t=s.find('T');
	if (p > t)return false;
	int a = p;
	int b = t-p-1;
	int c = (int)s.size() - t - 1;
	return (b >= 1 && a * b == c);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		cout << (ok(s) ? "YES" : "NO") << "\n";
	}
	return 0;
}