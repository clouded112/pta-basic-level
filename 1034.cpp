#include<iostream>
using namespace std;
long long gcd(long a, long b)
{
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	while (b) { long long t = a % b; a = b; b = t; }
	return a;
}
void p(long long a, long long b)
{
	if (b == 0) { cout << "Inf"; return; };
	bool neg = (a < 0) ^ (b < 0);
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	long long g = gcd(a, b);
	a /= g;
	b /= g;
	if (neg) cout << "(-";
	if (a == 0)cout << 0;
	else if (b == 1)cout << a;
	else if (a > b)cout << a / b << " " << a % b << "/" << b;
	else cout << a << "/" << b;
	if (neg) cout << ")";
}
int main()
{
	long long a1, b1, a2, b2;
	scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
	p(a1, b1); cout << " + "; p(a2, b2); cout << " = "; p(a1 * b2 + a2 * b1, b1 * b2); cout << "\n";
	p(a1, b1); cout << " - "; p(a2, b2); cout << " = "; p(a1 * b2 - a2 * b1, b1 * b2); cout << "\n";
	p(a1, b1); cout << " * "; p(a2, b2); cout << " = "; p(a1 * a2, b1 * b2); cout << "\n";
	p(a1, b1); cout << " / "; p(a2, b2); cout << " = ";
	if (a2 == 0) cout << "Inf\n";
	else p(a1 * b2, b1 * a2), cout << "\n";
	return 0;
}