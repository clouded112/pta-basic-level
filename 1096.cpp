#include<iostream>
#include<vector>
using namespace std;
bool is(int n)
{
	vector<int>v;
	for (int i = 1; i <= n; i++)if (n % i == 0)v.push_back(i);
	for (int i = 0; i < (int)v.size(); i++)
	{
		for (int j = i + 1;j < (int)v.size();j++)
		{
			for (int k = j + 1;k < (int)v.size();k++)
			{
				for (int l = k + 1; l < (int)v.size(); l++)
				{
					int m = v[i] + v[j] + v[k] + v[l];
					if (m % n == 0)return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		cout << (is(x) ? "Yes\n" : "No\n");
	}
}