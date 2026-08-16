#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
	string l;
	getline(cin, l);
	istringstream iss(l);
	string w;
	vector<string>v;
	while (iss >> w)v.push_back(w);
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
		if (i != (int)v.size() - 1)cout << " ";
	}
}