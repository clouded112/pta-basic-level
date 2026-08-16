#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{
	string s, s1;
	cin >> s >> s1;
	bool c[256] = { false };
	bool c1[256] = { false };
	for (char x : s1)c1[(char)toupper(x)] = true;
	for (char x : s)
	{
		char t = (char)toupper(x);
		if (!c1[(char)toupper(t)] && !c[(char)toupper(t)])
		{
			cout << t;
			c[(char)t] = true;
		}
	}
}