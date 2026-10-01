#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>v, weigh, len;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n; )
	{
		int j = i;
		while (j < n && v[j] == v[i])j++;
		weigh.push_back(v[i]);
		len.push_back(j - i);
		i = j;
	}
	vector<int>milk((int)weigh.size(), 200);
	for (int i = 1; i < (int)weigh.size(); i++)
		if (weigh[i] > weigh[i - 1])milk[i] = max(milk[i], milk[i - 1] + 100);
	for (int i = (int)weigh.size() - 2; i >= 0; i--)
		if (weigh[i] > weigh[i + 1])milk[i] = max(milk[i], milk[i + 1] + 100);
	int total = 0;
	for (int i = 0; i < (int)weigh.size(); i++)
		total += milk[i] * len[i];
	cout << total;
	return 0;
}