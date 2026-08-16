#include<iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int c[256] = { 0 };
	for (char x:a)
	{
		c[(int)x]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (c[i] != 0)cout << (char)i << ":" << c[i]<<"\n";
	}
}