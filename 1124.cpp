#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>v(2);
	v[0] = 0;
	v[1] = 1;
	int i = 2;
	do {
		v.push_back(v[i - 1] + v[i - 2]);
		i++;
	} while (v[i - 1] <= n);
	int ans = (abs(v[i - 1] - n) < abs(v[i - 2] - n)) ? v[i - 1] : v[i - 2];
	cout << ans;
	return 0;
}