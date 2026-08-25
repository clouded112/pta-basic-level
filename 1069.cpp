#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int m, n, s;
	cin >> m >> n >> s;
	vector<string>name;
	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		name.push_back(s);
	}
	int cnt = 0;
	set<string>win;
	for (int i = s-1; i < m;)
	{
		if (win.count(name[i])) 
		{
			i++;
			continue;
		}
		else
		{
			win.insert(name[i]);
			cout << name[i]<<"\n";
			i += n;
			cnt++;
		}
	}
	if (cnt == 0)cout << "Keep going...";
	return 0;
}