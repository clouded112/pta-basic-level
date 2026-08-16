#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	int h, n, k;
	cin >> h >> n >> k;
	vector<int>data(100000), nxt(100000);
	for (int i = 0; i < n; i++)
	{
		int addr, d, nt;
		cin >> addr >> d >> nt;
		data[addr] = d;
		nxt[addr] = nt;
	}
	vector<int>list;
	for (int p = h; p != -1; p = nxt[p])list.push_back(p);
	for (int i = 0; i + k <= (int)list.size(); i += k)reverse(list.begin() + i, list.begin() + i + k);
	for (int i = 0; i < (int)list.size(); i++)
	{
		cout << setw(5) << setfill('0') << list[i] << " "<< data[list[i]] << " ";
		if (i < (int)list.size() - 1)cout << setw(5) << list[i + 1] << "\n";
		else cout << "-1\n";
	}
}