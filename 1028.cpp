#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	string on,yn;
	string ob= "2014/09/07";
	string yb= "1814/09/05";
	for (int i = 0; i < n; i++)
	{
		string n, b;
		cin >> n >> b;
		if (b >= "1814/09/06" && b <= "2014/09/06")
		{
			cnt++;
			if (b < ob)
			{
				ob = b;
				on = n;
			}
			if (b > yb)
			{
				yb = b;
				yn = n;
			}
		}
	}
	if (cnt == 0)cout << 0;
	else cout << cnt << " " << on << " " << yn;
}