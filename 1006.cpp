#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int B = n / 100;
	int S = (n - 100 * B) / 10;
	int G = n - 100 * B - 10 * S;
	for (int i = 0; i < B; i++)
	{
		cout << 'B';
	}
	for (int i = 0; i < S; i++)
	{
		cout << 'S';
	}
	for (int i = 0; i < G; i++)
	{
		cout << i+1;
	}
}