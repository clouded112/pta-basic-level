#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	int const Max = 100000;
	int couple[Max](-1, Max);
	int present[Max](0, Max);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		couple[a] = b;
		couple[b] = a;
	}
	int m;
	cin >> m;
	vector<int> guests(m);
	for (int i = 0; i < m; i++)
	{
		cin >> guests[i];
		present[guests[i]] = 1;
	}
	vector<int> singles;
	for (int x : guests) if (couple[x] == -1 || !present[couple[x]])singles.push_back(x);
	sort(singles.begin(), singles.end());
	cout << singles.size()<<"\n";
	for (int i = 0; i < (int)singles.size(); i++)
	{
		if (i) cout << " ";
		printf("%05d", singles[i]);
	}
}