#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct q
{
	int score;
	int optcnt;
	int crtcnt;
	string crtopt;
	int wcnt = 0;
};
int main()
{
	int N, M;
	cin >> N >> M;
	vector<q>q(M);
	for (int i = 0; i < M; i++)
	{
		cin >> q[i].score >> q[i].optcnt >> q[i].crtcnt;
		for (int j = 0; j < q[i].crtcnt; j++)
		{
			char c;
			cin >> c;
			q[i].crtopt += c;
		}
	}
	for (int i = 0;i < N;i++)
	{
		int total = 0;
		for (int j = 0; j < M; j++)
		{
			char temp;
			int k;
			cin >> temp;
			cin >> k;
			string ans;
			for (int m = 0; m < k; m++)
			{
				char x;
				cin >> x;
				ans += x;
			}
			cin >> temp;
			if (ans == q[j].crtopt)total += q[j].score;
			else q[j].wcnt++;
		}
		cout << total << "\n";
	}
	int wmax = 0;
	for (int i = 0; i < M; i++)if (q[i].wcnt > wmax)wmax = q[i].wcnt;
	if (wmax == 0)cout << "Too simple";
	else
	{
		cout << wmax;
		for (int i = 0; i < M; i++)if (q[i].wcnt == wmax)cout << " " << i + 1;
	}
}