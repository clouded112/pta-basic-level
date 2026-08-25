#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int m, n, t;
	cin >> m >> n >> t;
	vector<vector<int>>img(n, vector<int>(m));
	map<int, int>cnt;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < m;j++)
		{
			cin >> img[i][j];
			cnt[img[i][j]]++;
		}
	}
	int found = 0;
	int ansX, ansY;
	int dx[8] = { -1,-1,-1,0,0,1,1,1 };
	int dy[8] = { -1,0,1,-1,1,-1,0,1 };
	for (int i = 0; i < n; i++)//dy
	{
		for (int j = 0;j < m;j++)//dx
		{
			bool ok = true;
			if (cnt[img[i][j]] != 1)continue;
			for (int d = 0; d < 8; d++)
			{
				int ni = i + dy[d], nj = j + dx[d];
				if (ni<0 || ni>=n || nj<0 || nj>=m)continue;
				if (abs(img[i][j] - img[ni][nj]) <= t)
				{
					ok = false;
					break;
				}
			}
			if (ok)
			{
				found++;
				ansX = j + 1;
				ansY = i + 1;
			}
		}
	}
	if (found > 1)cout << "Not Unique";
	else if (found == 0)cout << "Not Exist";
	else cout << '(' << ansX << ", " << ansY << "): " << img[ansY - 1][ansX - 1];
}