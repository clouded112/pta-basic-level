#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>a, b;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	b = a;
	sort(b.begin(), b.end());
	vector<int>res;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] == b[i] && a[i] == max)res.push_back(a[i]);
	}
	cout << res.size() << "\n";
	if (!res.empty())
	{
		for (int i = 0; i < res.size(); ++i)
		{
			if (i) cout << " ";
			cout << res[i];
		}
	}
	cout << "\n";
	return 0;
}