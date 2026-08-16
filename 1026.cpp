#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int c1, c2;
	cin >> c1 >> c2;
	int t = (c2 - c1+50) / 100;
	int h = t / 3600;
	int m = (t % 3600) / 60;
	int s = t % 60;
	printf("%02d:%02d:%02d", h, m, s);
}