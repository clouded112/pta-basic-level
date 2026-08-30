#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	bool has = false;
	long long start = max(m, 2);
	for (long long a = start; a <= n; a++)
	{
		long long lhs = a * a * a - (a - 1) * (a - 1) * (a - 1);
		for (long long b = 2; ; b++)
		{
			long long s = b * b + (b - 1) * (b - 1);
			if (s * s == lhs)
			{
				cout << a << " " << b << "\n";
				has = true;
				break;
			}
			if (s * s > lhs) break;
		}
	}
	if (!has) cout << "No Solution\n";
	return 0;
}