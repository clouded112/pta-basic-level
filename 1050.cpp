#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];
	sort(a.begin(), a.end(), greater<int>());
	int n = 1;
	for (int i = (int)sqrt(N); i >= 1; i--)
	{
		if (N % i == 0)
		{
			n = i;
			break;
		}
	}
	int m = N / n;
	vector<vector<int>> mat(m, vector<int>(n, 0));
	int top = 0, bottom = m - 1, left = 0, right = n - 1;
	int idx = 0;
	while (idx < N)
	{
		for (int j = left; j <= right && idx < N; j++)mat[top][j] = a[idx++];
		top++;
		for (int i = top; i <= bottom && idx < N; i++) mat[i][right] = a[idx++];
		right--;
		for (int j = right; j >= left && idx < N; j--)mat[bottom][j] = a[idx++];
		bottom--;
		for (int i = bottom; i >= top && idx < N; i--)mat[i][left] = a[idx++];
		left++;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j) cout << " ";
			cout << mat[i][j];
		}
		cout << "\n";
	}
	return 0;
}