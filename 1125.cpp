#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string S, P;
	cin >> S >> P;
	int n = S.size(), m = P.size();
	vector<int> nxt((n + 1) * 26, n);
	for (int i = n - 1; i >= 0; --i)
	{
		int b = i * 26, nb = (i + 1) * 26;
		for (int c = 0; c < 26; ++c) nxt[b + c] = nxt[nb + c];
		nxt[b + (S[i] - 'a')] = i;
	}
	int bestL = -1, bestLen = n + 1;
	for (int l = 0; l < n; ++l)
	{
		int cur = l;
		bool ok = true;
		for (int j = 0; j < m; ++j)
		{
			cur = nxt[cur * 26 + (P[j] - 'a')];
			if (cur == n) { ok = false; break; }
			++cur;
		}
		if (ok)
		{
			int len = cur - l;
			if (len < bestLen)
			{
				bestLen = len;
				bestL = l;
			}
		}
	}
	cout << S.substr(bestL, bestLen) << '\n';
	return 0;
}//ai生成