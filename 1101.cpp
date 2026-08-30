#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	string a;
	int d;
	cin >> a >> d;
	string b = a.substr(a.size() - d) + a.substr(0, a.size() - d);
	long double aa = stold(a);
	long double bb = stold(b);
	long double ans = bb / aa;
	printf("%.2Lf", ans);
}