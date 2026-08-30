#include <iostream>
#include <vector>
using namespace std;
int main()
{
	long long i1, i2;
	cin >> i1 >> i2;
	int N, M;
	cin >> N >> M;
	vector<vector<long long>> a(N + 1, vector<long long>(M + 1));
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> a[i][j];
	const int MAX = 100000;
	vector<bool> vis(MAX + 1, false);
	vector<bool> can(MAX + 1, false);
	vector<long long> appeared = { i1, i2 };
	vis[i1] = vis[i2] = true;
	can[i1 > i2 ? i1 - i2 : i2 - i1] = true;
	vector<bool> out(N + 1, false);
	for (int k = 1; k <= M; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			if (out[i]) continue;
			long long x = a[i][k];
			bool ok = (x >= 1 && x <= MAX && !vis[x] && can[x]);
			if (!ok)
			{
				out[i] = true;
				cout << "Round #" << k << ": " << i << " is out.\n";
			}
			else
			{
				for (long long y : appeared)
					can[x > y ? x - y : y - x] = true;
				appeared.push_back(x);
				vis[x] = true;
			}
		}
	}
	vector<int> win;
	for (int i = 1; i <= N; i++)
		if (!out[i]) win.push_back(i);
	if (win.empty())cout << "No winner.\n";
	else
	{
		cout << "Winner(s):";
		for (int i = 0; i < (int)win.size(); i++)
			cout << " " << win[i];
		cout << "\n";
	}
	return 0;
}