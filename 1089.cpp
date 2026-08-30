#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>say(n + 1);
	for (int i = 1; i <= n; i++)cin >> say[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1;j <= n;j++)
		{
			vector<int> wolf(n + 1, 0);
			wolf[i] = wolf[j] = 1;
			vector<int>liar;
			for (int k = 1; k <= n; k++)
			{
				if (say[k] > 0)
				{
					if (wolf[say[k]])liar.push_back(k);
				}
				else
				{
					if (!wolf[-say[k]])liar.push_back(k);
				}
			}
			if (liar.size() == 2 && wolf[liar[0]] + wolf[liar[1]] == 1)
			{
				cout << i << " " << j << "\n";
				return 0;
			}
		}
	}
	cout << "No Solution" << "\n";
	return 0;
}