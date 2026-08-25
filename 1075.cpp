#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
struct Node
{
	int val;
	int next;
};
int main()
{
	vector<Node>node(100000);
	int head, N, K;
	cin >> head >> N >> K;
	for (int i = 0; i < N; i++)
	{
		int add, val, next;
		cin >> add >> val >> next;
		node[add] = { val,next };
	}
	vector<int>a, b, c;
	int p = head;
	while (p != -1)
	{
		if (node[p].val < 0)a.push_back(p);
		else if (node[p].val <= K)b.push_back(p);
		else c.push_back(p);
		p = node[p].next;
	}
	vector<int>v;
	v.insert(v.end(), a.begin(), a.end());
	v.insert(v.end(), b.begin(), b.end());
	v.insert(v.end(), c.begin(), c.end());
	for (int i = 0; i < (int)v.size(); i++)
	{
		cout << setfill('0') << setw(5) << v[i] << " " << node[v[i]].val<<" ";
		if (i == (int)v.size() - 1)cout << "-1\n";
		else cout << setfill('0') << setw(5) << v[i + 1] << "\n";
	}
	return 0;
}