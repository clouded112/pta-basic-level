#include <iostream>
#include <vector>
using namespace std;
void func(int n,vector<int>& v)
{
	bool p[100001] = { false };
	p[0] = p[1] = false;
	for (int i = 2; i <= n; i++) p[i] = true;
	for (int i = 2; i*i <= n; i++)
	{
		if (p[i])
		{
			for (int j = i*i; j <=n ; j+=i)
			{
				p[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (p[i])v.push_back(i);
	}
}
int main() 
{
	int n;
	cin >> n;
	vector<int>v;
	func(n, v);
	int cnt=0;
	for (int i = 0; i+1 < (int)v.size(); i++)
	{
		if (v[i + 1] - v[i] == 2)cnt++;
	}
	cout << cnt;
}