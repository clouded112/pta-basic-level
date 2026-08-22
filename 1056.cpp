#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			sum += (11 * v[i] + 11 * v[j]);
		}
	}
	cout << sum;
}