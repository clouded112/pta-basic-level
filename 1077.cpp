#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int g2 = 0, sum = 0, max = -1, min = m + 1, cnt = 0;
		cin >> g2;
		for (int j = 1;j < n;j++)
		{
			int x;
			cin >> x;
			if (x <= m && x >= 0)
			{
				sum += x;
				if (x < min)min = x;
				if (x > max)max = x;
				cnt++;
			}
		}
		double g1 = (double)(sum - min - max) / (cnt - 2);
		int ans = (int)(g1 + g2 + 1) / 2;
		cout << ans << "\n";
	}
	return 0;
}