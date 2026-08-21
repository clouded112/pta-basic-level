#include<iostream>
using namespace std;
int main()
{
	string n;
	cin >> n;
	long long cP = 0;
	long long cPA = 0;
	long long cPAT = 0;
	for (char x : n)
	{
		if (x == 'P')cP++;
		else if (x == 'A')cPA = (cPA + cP) % 1000000007;
		else if (x == 'T')cPAT = (cPAT + cPA) % 1000000007;
	}
	cout << cPAT;
}