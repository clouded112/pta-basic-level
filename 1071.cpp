#include<iostream>
using namespace std;
int main()
{
	int T, K;
	cin >> T >> K;
	for (int i = 0; i < K; i++)
	{
		int n1, b, t, n2;
		cin >> n1 >> b >> t >> n2;
		if (t > T) 
		{
			cout << "Not enough tokens.  Total = " << T << "." << "\n";
			continue;
		}
		bool x = (b == 1);
		bool y = (n1 < n2);
		if (x == y)
		{
			T += t;
			cout << "Win " << t << "!  Total = " << T << "." << "\n";
		}
		else
		{
			T -= t;
			cout << "Lose " << t << ".  Total = " << T << "." << "\n";
		}
		if (T == 0)
		{
			cout << "Game Over.\n";
			return 0;
		}
	}
	return 0;
}