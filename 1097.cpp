#include <iostream>
#include <vector>
using namespace std;
int main() 
{
	int n, k, x;
	cin >> n >> k >> x;
	vector<vector<int>> v(n, vector<int>(n));
	for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)cin >> v[i][j];
	int shift = 1;
	vector<int> colSum(n, 0);
	for (int i = 0; i < n; i++) 
	{
		int rowShift = 0;
		if (i % 2 == 0) 
		{
			rowShift = shift;
			shift = shift % k + 1;
		}
		for (int j = 0; j < n; j++) {
			int val;
			if (rowShift > 0 && j < rowShift)val = x;
			else val = v[i][j - rowShift];
			colSum[j] += val;
		}
	}
	for (int j = 0; j < n; j++)cout << (j ? " " : "") << colSum[j];
	cout << "\n";
	return 0;
}