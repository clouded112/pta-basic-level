#include<iostream>
using namespace std;
int main()
{
	string ss;
	cin >> ss;
	int P = 0;
	int T = 0;
	int A = 0;
	int e = 0;
	int s = 0;
	int t = 0;
	for (int i = 0; i < ss.size(); i++)
	{
		switch (ss[i])
		{
		case 'P':
			P++;
			break;
		case 'A':
			A++;
			break;
		case 'T':
			T++;
			break;
		case 'e':
			e++;
			break;
		case 's':
			s++;
			break;
		case 't':
			t++;
			break;
		default:
			break;
		}
	}
	while (P || T || A || e || s || t)
	{
		if (P) { cout << 'P';--P; }
		if (A) { cout << 'A';--A; }
		if (T) { cout << 'T';--T; }
		if (e) { cout << 'e';--e; }
		if (s) { cout << 's';--s; }
		if (t) { cout << 't';--t; }
	}
	return 0;
}