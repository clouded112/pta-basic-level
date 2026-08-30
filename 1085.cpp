#include <iostream>
#include <map>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;
struct School
{
	string name;
	int score;
	int cnt;
};
class cmp
{
public:
	bool operator()(const School& a, const School& b) const
	{
		if (a.score / 6 != b.score / 6) return a.score / 6 > b.score / 6;
		if (a.cnt != b.cnt) return a.cnt < b.cnt;
		return a.name < b.name;
	}
};
int main()
{
	int n;
	cin >> n;
	map<string, School> mp;
	for (int i = 0; i < n; i++)
	{
		string id, school;
		int score;
		cin >> id >> score >> school;
		for (char& x : school) x = tolower((unsigned char)x);
		if (!mp.count(school)) mp[school] = { school, 0, 0 };
		int add;
		if (id[0] == 'T') add = score * 9;
		else if (id[0] == 'A') add = score * 6;
		else add = score * 4;
		mp[school].cnt++;
		mp[school].score += add;
	}
	vector<School> v;
	for (auto& p : mp) v.push_back(p.second);
	sort(v.begin(), v.end(), cmp());
	cout << v.size() << "\n";
	int rank = 1;
	for (int i = 0; i < (int)v.size(); i++)
	{
		if (i > 0 && v[i].score / 6 != v[i - 1].score / 6) rank = i + 1;
		cout << rank << " " << v[i].name << " " << v[i].score / 6 << " " << v[i].cnt << "\n";
	}
	return 0;
}