#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	long long n,p;
	cin >> n >> p;
	vector<long long> a;
	for (int i = 0; i <n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	int t = 0;
	int j = 0;
	for (int i = 0;i < n;i++)
	{
		while (j < n && a[j] <= a[i] * p) j++;
		t = max(t, j - i);
	}
	cout << t;
}