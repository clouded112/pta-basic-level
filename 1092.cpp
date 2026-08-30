#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int>v(n + 1, 0);
	for (int i = 0; i < m; i++)
	{
		for (int j = 1;j <= n;j++)
		{
			int cnt;
			cin >> cnt;
			v[j] += cnt;
		}
	}
	int max = 0;
	for (int i = 1; i <= n; i++)if (v[i] > max)max = v[i];
	cout << max << "\n";
	bool frist = true;
	for (int i = 1; i <= n; i++)
	{
		if (v[i] == max)
		{
			if (!frist)cout << " ";
			cout << i;
			frist = false;
		}
	}
}