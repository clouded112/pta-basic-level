#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	getchar();
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		istringstream iss(s);
		string ss;
		while (iss >> ss)if (ss[2] == 'T')v.push_back((int)(ss[0] - 'A' + 1));
	}
	for (int i = 0; i < (int)v.size(); i++)cout << v[i];
}