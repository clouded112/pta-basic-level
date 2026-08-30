#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>v(n, 0);
	set<int>s;
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		int r = abs(k - i);
		v[r]++;
		s.insert(r);
	}
	for (auto it = s.rbegin(); it != s.rend(); it++)if (v[*it] > 1)cout << *it <<" " << v[*it] << "\n";
	return 0;
}