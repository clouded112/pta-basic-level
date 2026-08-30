#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string max, min;
	int max2 = 0, min2 = 20000;
	for (int i = 0; i < n; i++)
	{
		string s;
		int x, y;
		cin >> s >> x >> y;
		if (x * x + y * y > max2)
		{
			max2 = x * x + y * y;
			max = s;
		}
		if (x * x + y * y < min2)
		{
			min2 = x * x + y * y;
			min = s;
		}
	}
	cout << min << " " << max;
}