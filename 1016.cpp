#include <iostream>
using namespace std;
int main()
{
	long long A, B;
	int DA, DB;
	long long pa=0, pb=0;
	cin >> A >> DA >> B >> DB;
	while (A > 0)
	{
		if (A % 10 == DA)pa = pa * 10 + DA;
		A /= 10;
	}
	while (B > 0)
	{
		if (B % 10 == DB)pb = pb * 10 + DB;
		B /= 10;
	}
	cout << pa + pb;
	return 0;
}