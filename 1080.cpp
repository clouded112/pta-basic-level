#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct stu
{
	string id;
	int gp = -1;
	int gm = -1;
	int gf = -1;
	int g = -1;
};
int main()
{
	int p, m, n;
	cin >> p >> m >> n;
	map<string, stu>mp;
	for (int i = 0; i < p; i++)
	{
		string id;
		int score;
		cin >> id >> score;
		if (score >= 200)
		{
			mp[id].id = id;
			mp[id].gp = score;
		}
	}
	for (int i = 0; i < m; i++)
	{
		string id;
		int score;
		cin >> id >> score;
		mp[id].id = id;
		mp[id].gm = score;
	}
	for (int i = 0; i < n; i++)
	{
		string id;
		int score;
		cin >> id >> score;
		mp[id].id = id;
		mp[id].gf = score;
	}
	vector<stu>v;
	for (auto& it:mp)
	{
		if (it.second.gp == -1)continue;
		double G;
		if (it.second.gm > it.second.gf) G = it.second.gm * 0.4 + it.second.gf * 0.6;
		else G = it.second.gf;
		it.second.g = (int)(G + 0.5);
		if (it.second.g >= 60)v.push_back(it.second);
	}
	sort(v.begin(), v.end(), [](const stu& a, const stu& b) {if (a.g != b.g)return a.g > b.g;return a.id < b.id;});
	for (auto& x : v)cout << x.id << " " << x.gp << " " << x.gm << " " << x.gf << " " << x.g << "\n";
	return 0;
}