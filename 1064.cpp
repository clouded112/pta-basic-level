#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<int>ss;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		int sum = 0;
		for (char c:s)sum += c - '0';
		ss.insert(sum);
	}
	cout << ss.size() << "\n";
	bool first = true;
	for (int x : ss)
	{
		if (!first) cout << " ";
		cout << x;
		first = false;
	}
}