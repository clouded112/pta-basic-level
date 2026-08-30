#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;
bool isPrime(int x)
{
	if (x < 2)return false;
	for (int i = 2; (ll)i * i <= x; i++)
		if (x % i == 0)return false;
	return true;
}
void gen(vector<ll>& out, int pos, int r, int s, ll cur, ll p10)
{
	if (pos == r)
	{
		if (s == 0) out.push_back(cur * p10 + (p10 - 1));
		return;
	}
	int lo = (pos == 0) ? 1 : 0;
	int hi = (pos == r - 1) ? 8 : 9;
	int rem = r - pos - 1;
	for (int d = lo; d <= hi; ++d) 
	{
		int ns = s - d;
		if (ns < 0) break;
		if (ns > 9 * rem) continue;
		gen(out, pos + 1, r, ns, cur * 10 + d, p10);
	}
}
int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int ci = 1; ci <= N; ++ci) 
	{
		int K, m;
		cin >> K >> m;
		vector<pair<int, ll>> res;
		for (int t = 1; t < K; ++t)
		{
			int r = K - t;
			int s = m - 9 * t;
			if (s < 1 || s > 9 * r) continue;
			int n = m + 1 - 9 * t;
			int g = std::gcd(m, n);
			if (g <= 2 || !isPrime(g)) continue;
			ll p10 = 1;
			for (int i = 0; i < t; ++i) p10 *= 10;
			vector<ll> As;
			gen(As, 0, r, s, 0, p10);
			for (ll A : As) res.push_back(make_pair(n, A));
		}
		sort(res.begin(), res.end());
		cout << "Case " << ci << "\n";
		if (res.empty()) 
		{
			cout << "No Solution\n";
		}
		else 
		{
			for (auto& pr : res)
				cout << pr.first << " " << pr.second << "\n";
		}
	}
	return 0;
}//ai生成