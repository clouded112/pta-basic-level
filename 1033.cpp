#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main()
{
	string n, m;
	getline(cin, n);
	getline(cin, m);
	for (char& x : n)x = toupper(x);
	for (int i = 0; i < (int)n.size(); i++)
	{
		if (n[i] == '+')m.erase(remove_if(m.begin(), m.end(), ::isupper), m.end());
		else m.erase(remove(m.begin(), m.end(), n[i]), m.end());
	}
	for (char& x : n)x = tolower(x);
	for (int i = 0; i < (int)n.size(); i++)if (n[i] != '+')m.erase(remove(m.begin(), m.end(), n[i]), m.end());
	cout << m;
}