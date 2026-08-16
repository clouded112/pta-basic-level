#include<iostream>
using namespace std;
int main()
{
	int a, b, d;
	cin >> a >> b >> d;
	int s = a + b;
	if (s == 0) { cout << 0;return 0; }
	int c[100] = { 0 };
	int l = 0;
	while (s > 0)
	{
		c[l++] = s % d;
		s /= d;
	}
	for (int i = l - 1; i >= 0; i--)
	{
		cout << c[i];
	}
	return 0;
}