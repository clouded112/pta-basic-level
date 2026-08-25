#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m, n, a, b, c;
	cin >> m >> n >> a >> b >> c;
	int x;
	for (int i = 0; i < m; i++)
	{
		for (int j=0;j < n;j++) 
		{
			cin >> x;
			if (x >= a && x <= b)x = c;
			if (j)cout << " ";
			cout << setw(3) << setfill('0') << x;
		}
		cout << "\n";
	}
}