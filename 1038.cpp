#include<iostream>
using namespace std;
int main()
{
	int N, K;
	int cnt[101] = { 0 };
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		cnt[x]++;
	}
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		int x;
		cin >> x;
		cout << cnt[x];
		if (i != K - 1)cout << " ";
	}
	return 0;
}