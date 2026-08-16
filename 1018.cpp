#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int wa = 0, wb = 0;
	int ca[256] = { 0 };
	int cb[256] = { 0 };
	for (int i = 0; i < n; i++)
	{
		char a, b;
		cin >> a >> b;
		if (a == b)continue;
		if ((a == 'C' && b == 'J') || (a == 'B' && b == 'C') || (a == 'J' && b == 'B'))
		{
			wa++;
			ca[(int)a]++;
		}
		else
		{
			wb++;
			cb[(int)b]++;
		}
	}
	int t = n - wa - wb;
	char o[3] = { 'B','C','J' };
	char ma = 'B', mb = 'B';
	for (int i = 0; i < 3; i++)
	{
		if (ca[(int)o[i]] > ca[(int)ma]) ma = o[i];
		if (cb[(int)o[i]] > cb[(int)mb]) mb = o[i];
	}
	cout << wa << " " << t << " " << wb << "\n";
	cout << wb << " " << t << " " << wa << "\n";
	cout << ma << " " << mb << "\n";
	return 0;
}