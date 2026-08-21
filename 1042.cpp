#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int c[26] = { 0 };
	for (char x : s)if (isalpha(x))c[(int)(tolower(x) - 'a')]++;
	int max = 0;
	for (int i = 0; i < 26; i++)if ((int)c[i] > (int)c[max])max=i;
	cout << (char)('a' + max) << " " << c[max];
	return 0;
}