#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int m,n;
	vector<string>zkz;
	vector<int>sj;
	vector<int>ks;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string z;
		int s, k;
		cin >> z >> s >> k;
		zkz.push_back(z);
		sj.push_back(s);
		ks.push_back(k);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int s;
		cin >> s;
		vector<int>::iterator it=find(sj.begin(), sj.end(), s);
		cout << zkz[(int)(it - sj.begin())] << " "<<ks[(int)(it - sj.begin())];
		if (i != m - 1)cout << "\n";
	}
}