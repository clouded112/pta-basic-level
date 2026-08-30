#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;;
	int min=1000, max=0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x < min)min = x;
	}
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x > max)max = x;
	}
	int gap = min - max;
	if (gap < 1)cout << "No " << 1 - gap;
	else cout << "Yes " << gap;
}