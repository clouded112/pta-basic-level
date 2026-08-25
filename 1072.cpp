#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	getchar();
	set<string>s;
	for (int i = 0; i < m; i++)
	{
		string x;
		cin >> x;
		s.insert(x);
	}
	getchar();
	int stu = 0, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		string l;
		getline(cin, l);
		istringstream iss(l);
		string name, id;
		iss >> name;
		bool first = true, ok = true;
		while (iss >> id)
		{
			if (s.count(id))
			{
				if (first) cout << name << ": ";
				else cout << ' ';
				cout << id ;
				cnt++;
				first = false;
				ok = false;
			}
		}
		if (!ok)
		{
			stu++;
			cout << "\n";
		}
	}
	cout << stu << ' ' << cnt;
}