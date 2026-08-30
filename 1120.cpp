#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	long long m;
	cin >> n >> m;
	vector<long long> price(n + 1);
	for (int i = 1; i <= n; i++) cin >> price[i];
	long long sum = 0;
	int l = 1;
	long long ans = 0;
	for (int r = 1; r <= n; r++)
	{
		sum += price[r];
		while (sum > m && l <= r)
		{
			sum -= price[l];
			l++;
		}
		ans += (r - l + 1);
	}
	cout << ans;
	return 0;
}