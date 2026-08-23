#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct Person
{
	string name;
	int height;
};
struct cmp
{
	bool operator()(const Person& a, const Person& b)
	{
		if (a.height != b.height) return a.height > b.height;
		return a.name < b.name;
	}
};
int main()
{
	int N, K;
	cin >> N >> K;
	vector<Person> v(N);
	for (int i = 0; i < N; i++)cin >> v[i].name >> v[i].height;
	sort(v.begin(), v.end(), cmp());
	int idx = 0;
	int row = N / K + N % K;
	int rowCount = K;
	for (int j = 0; j < K; j++)
	{
		int cnt = (j == 0) ? row : N / K;
		vector<string> l(cnt);
		int m = cnt / 2;
		l[m] = v[idx++].name;
		int left = m - 1, right = m + 1;
		bool go = true;
		while (idx < N && (left >= 0 || right < cnt))
		{
			if (go)
			{
				if (left >= 0) l[left--] = v[idx++].name;
				go = false;
			}
			else
			{
				if (right < cnt) l[right++] = v[idx++].name;
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