#include <iostream>
#include <vector>
using namespace std;
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int n, t;
	cin >> n >> t;
	vector<int>v(n);
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] > max) max = v[i];
	}
	bool has = false;
	for (int i = 0; i < n;)
	{
		while (i < n && v[i] <= t) i++;
		if (i >= n) break;
		int j = i;
		while (j < n && v[j] > t) j++;
		cout << "[" << i << ", " << j - 1 << "]\n";
		has = true;
		i = j;
	}
	if (!has) cout << max << '\n';
	return 0;
}