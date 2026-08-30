#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
struct Rec
{
	string id;
	int score;
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m, n;
	cin >> n >> m;
	vector<Rec> byLevel[3];
	map<string, int> roomCnt, roomSum;
	map<string, map<string, int>> dateRoom;
	for (int i = 0; i < n; i++)
	{
		string id;
		int sc;
		cin >> id >> sc;
		char lv = id[0];
		int li = (lv == 'A') ? 0 : (lv == 'B') ? 1 : 2;
		byLevel[li].push_back({ id, sc });
		string room = id.substr(1, 3);
		string date = id.substr(4, 6);
		roomCnt[room]++;
		roomSum[room] += sc;
		dateRoom[date][room]++;
	}
	for (int i = 0; i < 3; i++)
	{
		sort(byLevel[i].begin(), byLevel[i].end(), [](const Rec& a, const Rec& b) {
			if (a.score != b.score) return a.score > b.score;return a.id < b.id;});
	}
	for (int q = 1; q <= m; q++)
	{
		int type;
		string data;
		cin >> type >> data;
		cout << "Case " << q << ": " << type << " " << data << "\n";
		if (type == 1)
		{
			int li = (data[0] == 'A') ? 0 : (data[0] == 'B') ? 1 : 2;
			auto& v = byLevel[li];
			if (v.empty()) cout << "NA\n";
			else for (auto& r : v)cout << r.id << " " << r.score << "\n";
		}
		else if (type == 2)
		{
			if (!roomCnt.count(data)) cout << "NA\n";
			else cout << roomCnt[data] << " " << roomSum[data] << "\n";
		}
		else
		{
			if (!dateRoom.count(data)) cout << "NA\n";
			else
			{
				auto& mp = dateRoom[data];
				vector<pair<string, int>> vec(mp.begin(), mp.end());
				sort(vec.begin(), vec.end(), [](const pair<string, int>& a,
					const pair<string, int>& b) {if (a.second != b.second) return a.second > b.second;return a.first < b.first;});
				for (auto& p : vec)cout << p.first << " " << p.second << "\n";
			}
		}
	}
	return 0;
}//ai生成