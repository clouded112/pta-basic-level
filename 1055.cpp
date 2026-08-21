#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct P
{
	string n;
	int h;
};
int main()
{
	int N, K;
	cin >> N >> K;
	vector<P> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i].n >> v[i].h;
	sort(v.begin(), v.end(), [](const P& a, const P& b) {
		if (a.h != b.h) return a.h > b.h;
		return a.n < b.n;
		});
	int idx = 0;
	int row = N / K + N % K;
	int rc = K;
	for (int j = 0; j < K; j++)
	{
		int cnt = (j == 0) ? row : N / K;
		vector<string> l(cnt);
		int m = cnt / 2;
		l[m] = v[idx++].n;
		int left = m - 1, right = m + 1;
		bool go = true;
		while (idx < N && (left >= 0 || right < cnt))
		{
			if (go)
			{
				if (left >= 0) l[left--] = v[idx++].n;
				go = false;
			}
			else
			{
				if (right < cnt) l[right++] = v[idx++].n;
				go = true;
			}
		}
		for (int j = 0; j < cnt; j++)
		{
			if (j) cout << " ";
			cout << l[j];
		}
		cout << endl;
	}
	return 0;
}