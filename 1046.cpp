#include<iostream>
using namespace std;
int main()
{
	int n;
	int cj = 0, cy = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int jha, jhu, yha, yhu;
		cin >> jha >> jhu >> yha >> yhu;
		int sum = jha + yha;
		if ((yhu == sum) ^ (jhu == sum))
		{
			if ((yhu == sum))cj++;
			else cy++;
		}
	}
	cout << cj << " " << cy;
}