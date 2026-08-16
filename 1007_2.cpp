#include <iostream>
#include <vector>
using namespace std;
void ss(int n, vector<int>&v)
{
	bool fp[100001] = { false };
	for (int i = 2; i*i <= n; i++)
	{
		if (!fp[i]) 
		{
			for (int j = i * i;j <= n;j += i)
			{
				fp[j] = true;
			}
		}
	}
	for (int i = 2;i <= n; i++)
	{
		if(!fp[i])v.push_back(i);
	}
}
int main()
{
	int n;
	cin >> n;
	vector<int>v;
	ss(n, v);
	int c=0;
	for (int i = 0; i+1 < v.size(); i++)	if (v[i + 1] - v[i] == 2)c++;
	cout << c;
}