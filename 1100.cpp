#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	set<string> s;
	for (int i = 0; i < n; i++)
	{
		string id;
		cin >> id;
		s.insert(id);
	}
	cin >> m;
	set<string> guests;
	for (int i = 0; i < m; i++)
	{
		string id;
		cin >> id;
		guests.insert(id);
	}
	int cnt = 0;
	string old1, old2;
	bool h1 = false, h2 = false;
	for (const string& id : guests)
	{
		if (s.count(id))
		{
			cnt++;
			if (!h1 || id.substr(6, 8) < old1.substr(6, 8))
			{
				old1 = id;
				h1 = true;
			}
		}
		else
		{
			if (!h2 || id.substr(6, 8) < old2.substr(6, 8))
			{
				old2 = id;
				h2 = true;
			}
		}
	}

	cout << cnt << "\n";
	if (cnt > 0) cout << old1 << "\n";
	else cout << old2 << "\n";
	return 0;
}