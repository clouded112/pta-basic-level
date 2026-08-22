#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	string s;
	int sum = 0;
	getline(cin, s);
	for (char x : s)
	{
		if (isalpha(x))
		{
			x = tolower(x);
			sum += (int)(x - 'a') + 1;
		}
	}
	int c0 = 0, c1 = 0;
	while (sum)
	{
		if (sum % 2 == 1)c1++;
		else c0++;
		sum /= 2;
	}
	cout << c0 << " " << c1;
}