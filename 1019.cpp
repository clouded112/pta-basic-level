#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class sx
{
public:
	bool operator()(const char& a, const char& b)const
	{
		return a < b;
	}
};
class jx
{
public:
	bool operator()(const char& a, const char& b)const
	{
		return a > b;
	}
};
int main()
{
	vector<char>s, j;
	string n;
	cin >> n;
	while (n.size() < 4) n = "0" + n;
	string a, b;
	int k = 0;
	while (k != 6174)
	{
		s.clear(); j.clear(); a.clear(); b.clear();
		for (char x : n)
		{
			s.push_back(x);
			j.push_back(x);
		}
		sort(s.begin(), s.end(), sx());
		sort(j.begin(), j.end(), jx());
		if (*s.begin() == *(s.begin() + 1)
			&& *(s.begin()) == *(s.begin() + 2)
			&& *(s.begin()) == *(s.begin() + 3))
		{
			cout << n << " - " << n << " = 0000";
			return 0;
		}
		else
		{
			for (auto i = j.begin();i != j.end();i++)
			{
				a.push_back(*i);
			}
			for (auto i = s.begin();i != s.end();i++)
			{
				b.push_back(*i);
			}
			int a1 = stoi(a);
			int b1 = stoi(b);
			k = a1 - b1;
			string k1 = to_string(k);
			while (k1.size() < 4) k1 = "0" + k1;
			while (a.size() < 4) a = "0" + a;
			while (b.size() < 4) b = "0" + b;
			cout << a << " - " << b << " = " << k1 << "\n";
			n = k1;
		}
	}
	return 0;
}