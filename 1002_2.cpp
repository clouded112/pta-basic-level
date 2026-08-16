#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n;
	cin >> n;
	int s = 0;
	for (char x:n)
	{
		s += x - '0';
	}
	string t = to_string(s);
	string py[10]= { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	for (int i = 0; i < t.size(); i++)
	{
		cout << py[t[i] - '0'];
		if (i != t.size()-1)cout << " ";
	}
}