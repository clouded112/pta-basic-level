#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long double sum = 0;
	for (int i = 0; i < n; i++)
	{
		long double x;
		cin >> x;
		sum += x * (i + 1) * (n - i);
	}
	cout << fixed<<setprecision(2)<<sum;
}