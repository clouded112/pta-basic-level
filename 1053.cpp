#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int N, D;
	double E;
	cin >> N >> E >> D;
	int maybe = 0, empty = 0;
	for (int i = 0; i < N; i++)
	{
		int K;
		cin >> K;
		int cnt = 0;
		for (int j = 0; j < K; j++)
		{
			double e;
			cin >> e;
			if (e < E) cnt++;
		}
		if (cnt > K / 2)
		{
			if (K > D)empty++;
			else maybe++;
		}
	}
	cout << fixed << setprecision(1) << maybe * 100.0 / N << "% " << empty * 100.0 / N << "%";
	return 0;
}