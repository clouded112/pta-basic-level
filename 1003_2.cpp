#include <iostream>
#include <string>
using namespace std;
bool ok(const string& s)
{
	int P = s.find('P');
	int T = s.find('T');
	int cT = 0;
	int cP = 0;
	for (char x:s)
	{
		if(x != 'P' && x != 'A' && x != 'T') return false;
		if (x == 'P')cP++;
		if (x == 'T')cT++;
	}
	if (cP != 1 || cT != 1|| P > T) return false;
	int a = P;
	int b = T - P - 1;
	int c = (int)s.size() - T - 1;
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
}