#include <iostream>
#include <cstdlib>
using namespace std;
void f(int m, long long num, long long den)
{
	if (num > den * m) cout << "Cong";
	else if (num == den * m) cout << "Ping";
	else cout << "Gai";
}
int main()
{
	int m, x, y;
	cin >> m >> x >> y;
	int jia = 0, yi = 0;
	bool found = false;
	int num = 0, den = 1;
	for (int a = 9; a >= 1 && !found; a--)  
	{
		for (int b = 9; b >= 0; b--)
		{
			int j = 10 * a + b;
			int yv = 10 * b + a;
			int diff = abs(j - yv);
			if ((long long)diff * y == (long long)x * yv)
			{
				jia = j;
				yi = yv;
				num = diff;     
				den = x;
				found = true;
				break;
			}
		}
	}
	if (!found)
	{
		cout << "No Solution\n";
		return 0;
	}
	cout << jia << " ";
	f(m, jia, 1); cout << " ";
	f(m, yi, 1); cout << " ";
	f(m, num, den);
	cout << "\n";
	return 0;
}