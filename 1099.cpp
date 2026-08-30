#include <iostream>
using namespace std;
bool isp(long long n) 
{
	if (n < 2) return false;
	if (n % 2 == 0) return n == 2;
	for (long long i = 3; i * i <= n; i += 2)
		if (n % i == 0) return false;
	return true;
}
bool ok(int n) 
{
	if (!isp(n)) return false;
	return isp(n - 6) || isp(n + 6);
}
int main() {
	int n;
	cin >> n;
	if (ok(n)) {
		cout << "Yes\n";
		if (n >= 7 && isp(n - 6))cout << n - 6 << "\n";
		else cout << n + 6 << "\n";
	}
	else 
	{
		int x = n + 1;
		while (!ok(x)) ++x;
		cout << "No\n" << x << "\n";
	}
	return 0;
}