#include<iostream>
using namespace std;
int main()
{
	int c[256] = { 0 };
	int cc[256] = { 0 };
	int sum1 = 0;
	int sum2 = 0;
	bool b = true;
	string s,ss;
	cin >> s >> ss;
	for (char x : s)c[(int)x]++;
	for (char x : ss)cc[(int)x]++;
	for (int i = 0; i < 256; i++)
	{
		if (c[i] >= cc[i])sum1 += c[i] - cc[i];
		else
		{
			sum2 += cc[i] - c[i];
			b = false;
		}
	}
	if (b)cout << "Yes " << sum1;
	else cout << "No " << sum2;
	return 0;
}