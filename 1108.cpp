#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int c[256] = { 0 };
	for (char x : s)c[(int)x]++;
	int cnt = c[(int)'S'] + c[(int)'t'] + c[(int)'r'] + c[(int)'i'] + c[(int)'n'] + c[(int)'g'];
	while (cnt--)
	{
		if (c[(int)'S'] != 0) { cout << 'S';--c[(int)'S']; }
		if (c[(int)'t'] != 0) { cout << 't';--c[(int)'t']; }
		if (c[(int)'r'] != 0) { cout << 'r';--c[(int)'r']; }
		if (c[(int)'i'] != 0) { cout << 'i';--c[(int)'i']; }
		if (c[(int)'n'] != 0) { cout << 'n';--c[(int)'n']; }
		if (c[(int)'g'] != 0) { cout << 'g';--c[(int)'g']; }
	}
	return 0;
}