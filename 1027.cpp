#include<iostream>
using namespace std;
int main()
{
	int n;
	int k = 0;
	int t = 0;
	char c;
	cin >> n >> c;
	while (n >= 2 * (t + 1) * (t + 1) - 1)t++;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0;j < k;j++)cout << " ";
		for (int j = 2 * (t - k) - 1; j > 0; j--)cout << c;
		k++;
		cout << "\n";
	}
	k -= 2;
	for (int i = 0; i < t - 1; i++)
	{
		for (int j = 0;j < k;j++)cout << " ";
		for (int j = 2 * (t - k) - 1; j > 0; j--)cout << c;
		k--;
		cout << "\n";
	}
	cout << n - (2 * t * t - 1);
}