#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	bool x[128] = { false };
	string s = a + b;
	for (char c:s)
	{
		if (!x[(int)c])
		{
			x[(int)c] = true;
			cout << c;
		}
	}
	return 0;
}