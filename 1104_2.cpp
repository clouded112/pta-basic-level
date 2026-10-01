#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
typedef long long ll;
ll pow10[15];
vector<pair<int, ll>> ans;
bool isPrime(int x)
{
	if (x < 2) return false;
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0) return false;
	return true;
}
void dfs(int pos, int rem, ll cur, int L, int t, int n)
{
	if (pos == L)
	{
		if (rem == 0)
		{
			ll A = cur * pow10[t] + (pow10[t] - 1);
			ans.push_back({ n, A });
		}
		return;
	}
	int lo = 0, hi = 9;
	if (L == 1) { lo = 1; hi = 8; }
	else if (pos == 0) { lo = 1; hi = 9; }
	else if (pos == L - 1) { lo = 0; hi = 8; }
	for (int d = lo; d <= hi && d <= rem; d++)
		dfs(pos + 1, rem - d, cur * 10 + d, L, t, n);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	pow10[0] = 1;
	for (int i = 1; i <= 10; i++)
		pow10[i] = pow10[i - 1] * 10;
	int N;
	cin >> N;
	for (int caseNo = 1; caseNo <= N; caseNo++)
	{
		int K, m;
		cin >> K >> m;
		ans.clear();
		for (int t = 0; t <= K; t++)
		{
			int n = m + 1 - 9 * t;
			if (n < 1) break;
			int g = gcd(m, n);
			if (g <= 2 || !isPrime(g)) continue;
			if (t == K)
			{
				if (m == 9 * K)
					ans.push_back({ n, pow10[K] - 1 });
				continue;
			}
			int L = K - t;
			int S = m - 9 * t;
			if (S < 0 || S > 9 * L) continue;
			dfs(0, S, 0, L, t, n);
		}
		sort(ans.begin(), ans.end());
		cout << "Case " << caseNo << '\n';
		if (ans.empty())
			cout << "No Solution\n";
		else
			for (auto& p : ans)
				cout << p.first << " " << p.second << '\n';
	}
	return 0;
}