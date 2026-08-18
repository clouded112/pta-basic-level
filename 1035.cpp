#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void IS(vector<vector<int>>& v, vector<int>& t)
{
	for (int i = 1; i < t.size(); ++i)
	{
		int k = t[i];
		int j = i - 1;
		while (j >= 0 && t[j] > k)
		{
			t[j + 1] = t[j];
			j--;
		}
		t[j + 1] = k;
		v.push_back(t);
	}
}
void MS(vector<vector<int>>& v, vector<int>& t)
{
	int n = t.size();
	for (int step = 2; step < n * 2; step *= 2)
	{
		for (int i = 0; i < n; i += step)
		{
			int r = i + step;
			if (r > n) r = n;
			sort(t.begin() + i, t.begin() + r);
		}
		v.push_back(t);
	}
}
int f(const vector<vector<int>>& s, const vector<int>& y)
{
	int ans = -1;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == y)ans = i;
	}
	return ans;
}
void p(const vector<int>& s)
{
	for (int i = 0; i < s.size(); ++i)
	{
		if (i) cout << " ";
		cout << s[i];
	}
	cout << endl;
}
int main()
{
	vector<vector<int>>v1, v2;
	int n;
	cin >> n;
	vector<int>k, k1;
	for (int i = 0; i < n; i++) { int x;cin >> x;k.push_back(x); }
	for (int i = 0; i < n; i++) { int x;cin >> x;k1.push_back(x); }
	vector<int> tmp = k;
	IS(v1, tmp);
	tmp = k;
	MS(v2, tmp);
	int pos = f(v1, k1);
	if (pos != -1 && pos + 1 < v1.size())
	{
		cout << "Insertion Sort" << endl;
		p(v1[pos + 1]);
		return 0;
	}
	pos = f(v2, k1);
	if (pos != -1 && pos + 1 < v2.size())
	{
		cout << "Merge Sort" << endl;
		p(v2[pos + 1]);
		return 0;
	}
	return 0;
}