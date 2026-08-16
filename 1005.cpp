#include <iostream>
#include <set>
using namespace std;
int main()
{
	int k;
	cin >> k;
	set<int>s;
	set<int>v;
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		if (s.find(x) == s.end()) v.insert(x);
		while (x != 1)
		{
			if (x % 2 == 0)x = x / 2;
			else x = (3 * x + 1) / 2;
			s.insert(x);
			if (v.find(x) != v.end())v.erase(x);
		}
	}
	bool a = true;
	for (auto it = v.rbegin(); it != v.rend(); ++it) 
	{
		if (!a) cout << " ";
		cout << *it;
		a = false;
	}
}