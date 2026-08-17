#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<int,int>m;
	for (int i = 0; i < n; i++)
	{
		int bh,cj;
		cin >> bh >> cj;
		m[bh] += cj;
	}
	int zf = -1;
	int id = -1;
	for (const auto& p : m)
	{
		if (p.second > zf)
		{
			zf = p.second;
			id = p.first;
		}
	}
	cout << id << " " << zf<<"\n";
	return 0;
}