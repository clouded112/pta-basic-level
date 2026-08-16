#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	m %= n;
	vector<int>v;
	for (int i = 0;i < n;i++) { 
		int x;
		cin >> x;
		v.push_back(x);
	};
	reverse(v.begin(), v.end());
	reverse(v.begin(), v.begin()+m);
	reverse(v.begin()+m, v.end());
	for (int i=0;i < n;i++)
	{
		if (i != 0)cout << " ";
		cout << v[i];
	}
}