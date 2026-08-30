#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	map<int, vector<int>>mp;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		mp[a].push_back(b);
		mp[b].push_back(a);
	}
	for (int i = 0; i < m; i++)
	{
		int k;
		cin >> k;
		vector<int> box(k);
		set<int> st;
		for (int j = 0; j < k; j++)
		{
			cin >> box[j];
			st.insert(box[j]);
		}
		bool ok = true;
		for (int x : box)
		{
			for (int y:mp[x])
			{
				if (st.count(y)) 
				{
					ok = false;
					break;
				}
			}
			if (!ok) break;
		}
		cout << (ok ? "Yes" : "No") << "\n";
	}
	return 0;
}