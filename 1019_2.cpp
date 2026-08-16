#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	vector<int>s, j;
	string n, a, b;
	cin >> n;
	while (n.size() < 4) n = "0" + n;
	int k = 0;
	while (k != 6174)
	{
		s.clear(), j.clear();a.clear(); b.clear();
		for (char x : n)s.push_back(x);
		sort(s.begin(), s.end());
		j.assign(s.rbegin(), s.rend());
		if (*s.begin() == *(s.begin() + 1)
			&& *(s.begin()) == *(s.begin() + 2)
			&& *(s.begin()) == *(s.begin() + 3))
		{
			cout << n << " - " << n << " = 0000";
			return 0;
		}
		else
		{
			for (auto i = j.begin();i != j.end();i++)a.push_back(*i);
			for (auto i = s.begin();i != s.end();i++)b.push_back(*i);
			k = stoi(a) - stoi(b);
			string k1 = to_string(k);
			while (k1.size() < 4) k1 = "0" + k1;
			cout << a << " - " << b << " = " << k1 << "\n";
			n = k1;
		}
	}
}