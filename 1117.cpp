#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std;
bool allSingle(const vector<int>& v)
{
	for (int x : v)
		if (x >= 10) return false;
	return true;
}
int main() {
	int n1, n2;
	cin >> n1 >> n2;
	vector<int> v;
	for (int i = n1; i <= n2; i++) v.push_back(i);
	while (!allSingle(v))
	{
		for (int& x : v)
		{
			if (x == 0) { x = 0; continue; }
			long long p = 1;
			int t = x;
			while (t) {
				int d = t % 10;
				p *= d * d * d;
				t /= 10;
			}
			int sum = 0;
			while (p) {
				sum += p % 10;
				p /= 10;
			}
			x = sum;
		}
	}
	int cnt[10] = { 0 };
	for (int x : v) ++cnt[x];
	int best = 0;
	for (int d = 0; d < 10; ++d) best = max(best, cnt[d]);
	cout << best << '\n';
	bool first = true;
	for (int d = 0; d < 10; ++d)
	{
		if (cnt[d] == best)
		{
			if (!first) cout << ' ';
			cout << d;
			first = false;
		}
	}
	cout << '\n';
	return 0;
}