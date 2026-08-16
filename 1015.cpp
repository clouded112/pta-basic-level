#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class xs
{
public:
	int id;
	int d;
	int c;
	int cls;
};
class cmp
{
public:
	bool operator()(const xs& a, const xs& b) const
	{
		if (a.cls != b.cls) return a.cls < b.cls;
		int ta = a.d + a.c, tb = b.d + b.c;
		if (ta != tb) return ta > tb;
		if (a.d != b.d) return a.d > b.d;
		return a.id < b.id;
	}
};
int main()
{
	int N, L, H;
	cin >> N >> L >> H;
	vector<xs> v;
	for (int i = 0; i < N; i++)
	{
		int id, d, c;
		cin >> id >> d >> c;
		if (d >= L && c >= L)
		{
			xs s;
			s.id = id; s.d = d; s.c = c;
			if (d >= H && c >= H) s.cls = 1;
			else if (d >= H) s.cls = 2;
			else if (d >= c) s.cls = 3;
			else s.cls = 4;
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end(), cmp());
	cout << v.size() << endl;
	for (auto& s : v)
		cout << s.id << " " << s.d << " " << s.c << endl;
	return 0;
}