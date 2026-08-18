#include<iostream>
using namespace std;
int main()
{
	int n;
	char x;
	cin >> n >> x;
	int y = (n + 1) / 2;
	for (int i = 0; i < n; i++)cout << x;
	cout << "\n";
	for (int i = 0; i < y-2; i++)
	{
		cout << x;
		for (int j = 0; j < n - 2; j++)cout << " ";
		cout << x<<"\n";
	}
	for (int i = 0; i < n; i++)cout << x;
	return 0;
}