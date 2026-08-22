#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
void p(vector<int>& v, int n)
{
	vector<bool> fp(n + 1, false);
	for (int i = 2; i * i <= n; i++)
	{
		if (!fp[i])for (int j = i * i; j <= n; j += i)fp[j] = true;
	}
	for (int i = 2; i <= n; i++)if (!fp[i])v.push_back(i);
}
struct person
{
	string id;
	string prize;
	bool isChecked = false;
};
int main()
{
	int n;
	cin >> n;
	vector<int>prime;
	map<string,person>mp;
	p(prime, n);
	for (int i = 0; i < n; i++)
	{
		string id;
		cin >> id;
		if (i == 0)
		{
			mp[id]={ id,"Mystery Award",false };
			continue;
		}
		if (binary_search(prime.begin(), prime.end(), i + 1))mp[id]={ id,"Minion",false };
		else mp[id]={ id,"Chocolate",false };
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		string id1;
		cin >> id1;
		auto it = mp.find(id1);   
		if (it == mp.end())cout << id1 << ": Are you kidding?" << "\n";
		else if (it->second.isChecked)cout << id1 << ": Checked" << "\n";
		else
		{
			it->second.isChecked = true;
			cout << id1 << ": " << it->second.prize << "\n";
		}
	}
	return 0;
}