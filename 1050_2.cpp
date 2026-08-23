#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int>v;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int n = 1;
	sort(v.begin(), v.end(), greater<int>());
	for (int i = (int)sqrt(N); i >= 1; i--)
	{
		if (N % i == 0)
		{
			n = i;
			break;
		}
	}
	int m = N / n;
	vector<vector<int>>vv(m, vector<int>(n, 0));
	int t = 0, b = m - 1, l = 0, r = n - 1, idx = 0;
	while (idx < N)
	{
		for (int i = l; i <= r && idx < N; i++)vv[t][i] = v[idx++];
		t++;
		for (int i = t;i <= b && idx < N;i++)vv[i][r] = v[idx++];
		r--;
		for (int i = r;i >= l && idx < N;i--)vv[b][i] = v[idx++];
		b--;
		for (int i = b; i >= t && idx < N; i--)vv[i][l] = v[idx++];
		l++;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (j) cout << " ";
			cout << vv[i][j];
		}
		cout << "\n";
	}
}