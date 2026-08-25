#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long double ans = 0;
	for (int i = 0; i < n; i++)
	{
		long double a, b;
		cin >> a >> b;
		long double m = sqrt(a * a + b * b);
		if (m > ans)ans = m;
	}
	cout << fixed << setprecision(2) << ans;
}