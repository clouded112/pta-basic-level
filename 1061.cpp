#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> score(M);
	vector<int> ans(M);
	for (int i = 0; i < M; i++) cin >> score[i];
	for (int i = 0; i < M; i++) cin >> ans[i];
	for (int i = 0; i < N; i++)
	{
		int total = 0;
		for (int j = 0; j < M; j++)
		{
			int x;
			cin >> x;
			if (x == ans[j]) total += score[j];
		}
		cout << total << "\n";
	}
	return 0;
}