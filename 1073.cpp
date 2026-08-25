#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
struct question
{
	int score;
	int optCnt;
	int correctCnt;
	string correct;
	int wrong[5] = { 0 };
};
int main()
{
	int m, n;
	cin >> n >> m;
	vector<question>q(m);
	for (int i = 0; i < m; i++)
	{
		cin >> q[i].score >> q[i].optCnt >> q[i].correctCnt;
		for (int j = 0; j < q[i].correctCnt; j++)
		{
			char c;
			cin >> c;
			q[i].correct += c;
		}
	}
	for (int i = 0; i < n; i++)
	{
		double total = 0;
		for (int j = 0; j < m; j++)
		{
			char temp;
			int k;
			string ans;
			cin >> temp >> k;
			for (int t = 0; t < k; t++)
			{
				char x;
				cin >> x;
				ans += x;
			}
			cin >> temp;
			bool select[5] = { false };
			for (char c : ans)select[(int)(c - 'a')] = true;
			bool correct[5] = { false };
			for (char c : q[j].correct)correct[(int)(c - 'a')] = true;
			bool hasWrong = false;
			for (int o = 0; o < 5; o++)
			{
				if (select[o] && !correct[o]) { q[j].wrong[o]++;hasWrong = true; }
				if (!select[o] && correct[o])q[j].wrong[o]++;
			}
			bool allCorrect = true;
			for (int p = 0; p < 5; p++)if (select[p] != correct[p]) { allCorrect = false;break; }
			if (allCorrect)total += q[j].score;
			else if (!hasWrong)total += (double)q[j].score / 2;
		}
		cout << fixed << setprecision(1) << total << "\n";
	}
	int maxWrong = 0;
	for (int i = 0; i < m; i++)for (int y = 0; y < 5; y++)if (q[i].wrong[y] > maxWrong) maxWrong = q[i].wrong[y];
	if (maxWrong == 0)cout << "Too simple" << "\n";
	else for (int i = 0; i < m; i++)for (int o = 0; o < 5; o++)if (q[i].wrong[o] == maxWrong)cout << maxWrong << " " << i + 1 << "-" << (char)('a' + o) << "\n";
	return 0;
}