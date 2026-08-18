#include<iostream>
using namespace std;
int main()
{
	int pg, ps, pk, ag, as, ak;
	scanf_s("%d.%d.%d %d.%d.%d", &pg, &ps, &pk, &ag, &as, &ak);//用scanf提交
	int pri = pg * 17 * 29 + ps * 29 + pk;
	int paid = ag * 17 * 29 + as * 29 + ak;
	int x = paid - pri;
	if (x < 0) 
	{
		cout << "-";
		x = -x;
	}
	int g = x / (17 * 29);
	int s = x % (17 * 29) / 29;
	int k = x % 29;
	printf("%d.%d.%d", g, s, k);
	return 0;
}