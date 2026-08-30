#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int a[1000] = { 2, 0, 1, 9 };
	for (int i = 4; i < n; ++i)a[i] = (a[i - 1] + a[i - 2] + a[i - 3] + a[i - 4]) % 10;
	for (int i = 0; i < n; ++i)cout << a[i];
	return 0;
}