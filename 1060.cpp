#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end(), greater<int>());
	int e = 0;
	while (e < n && v[e] > e + 1)e++;
	cout << e << endl;
	return 0;
}