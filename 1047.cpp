#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	int c[1000] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		int id, cj;
		cin >> s >> cj;
		int pos=s.find('-');
		int p = stoi(s.substr(0, pos));
		c[p] += cj;
	}
	int max = 0;
	int xh = 0;
	for (int i = 0; i < 1001; i++)
	{
		if (c[i] > max)
		{
			max = c[i];
			xh = i;
		}
	}
	cout << xh <<" " << max;
}