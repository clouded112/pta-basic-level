#include <iostream>
using namespace std;
int main()
{
	int n, x, ans = 0;
	cin >> n;
	while (n--)
	{
		cin >> x;
		if (x % 2 == 1)ans ^= x;
	}
	cout << ans;
	return 0;
}