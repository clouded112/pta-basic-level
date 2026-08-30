#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
struct Node
{
	int addr;
	int val;
	int next;
};
int main()
{
	int h, n, k;
	cin >> h >> n >> k;
	vector<Node>v(100000);
	for (int i = 0; i < n; i++)
	{
		int add, data, nxt;
		cin >> add >> data >> nxt;
		v[add].addr = add;
		v[add].val = data;
		v[add].next = nxt;
	}
	vector<Node>L;
	int p = h;
	while (p != -1)
	{
		L.push_back(v[p]);
		p = v[p].next;
	}
	vector<vector<Node>>block;
	int m = 0;
	while (m < L.size())
	{
		vector<Node>vv;
		for (int i = 0; i < k; i++)
			if (m + i < L.size())vv.push_back(L[m + i]);
		m += k;
		block.push_back(vv);
	}
	reverse(block.begin(), block.end());
	for (int i = 0; i < block.size(); i++)
	{
		for (int j = 0; j < block[i].size(); j++)
		{
			if (i == block.size() - 1 && j == block[i].size() - 1)
				printf("%05d %d -1\n", block[i][j].addr, block[i][j].val);
			else
			{
				int nextAddr;
				if (j + 1 < block[i].size())
					nextAddr = block[i][j + 1].addr;
				else
					nextAddr = block[i + 1][0].addr;
				printf("%05d %d %05d\n", block[i][j].addr, block[i][j].val, nextAddr);
			}
		}
	}
}