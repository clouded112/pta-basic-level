#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double r1, r2, p1, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	double A = r1 * r2 * cos(p1 + p2);
	double B = r1 * r2 * sin(p1 + p2);
	if (fabs(A) < 0.005) A = 0;
	if (fabs(B) < 0.005) B = 0;
	cout << fixed << setprecision(2);
	if (B < 0)cout << A << "-" << fabs(B) << "i";
	else cout << A << "+" << B << "i";
	return 0;
}