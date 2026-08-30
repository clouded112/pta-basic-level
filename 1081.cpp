#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		bool digit = false;
		bool alpha = false;
		bool luan = false;
		if (s.size() < 6)
		{
			cout << "Your password is tai duan le.\n";
			continue;
		}
		for (char x : s)
		{
			if (!isdigit(x) && !isalpha(x) && (x != '.'))
			{
				luan = true;
				break;
			}
			if (isdigit(x))digit = true;
			if (isalpha(x))alpha = true;
		}
		if (luan)
		{
			cout << "Your password is tai luan le.\n";
			continue;
		}
		if (alpha && digit) cout << "Your password is wan mei.\n";
		else if (alpha) cout << "Your password needs shu zi.\n";
		else cout << "Your password needs zi mu.\n";
	}
	return 0;
}