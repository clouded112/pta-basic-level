#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int A1 = 0;
	int A2 = 0;
	int A3 = 0;
	int A4 = 0;
	int A5 = 0;
	bool h1 = false;
	bool h2 = false;
	bool h3 = false;
	bool h4 = false;
	bool h5 = false;
	int s = 1;
	int cnt = 0;
	for (int i = 0;i < n;i++)
	{
		int x;
		cin >> x;
		switch (x % 5)
		{
		case 0:
			if (x % 2 == 0) { A1 += x;h1 = true; }
			break;
		case 1:
		{ A2 += s * x;s = -s; h2 = true; }
		break;
		case 2:
		{ A3++; h3 = true; }
			break;
		case 3:
		{ A4 += x; cnt++; h4 = true; }
			break;
		case 4:
			if (x > A5) { A5 = x; h5 = true; }
			break;
		}
	}
	if (h1) printf("%d ", A1);  else printf("N ");
	if (h2) printf("%d ", A2);  else printf("N ");
	if (h3) printf("%d ", A3);  else printf("N ");
	if(h4)printf("%.1f ", (double)A4 / cnt);  else printf("N ");
	if (h5) printf("%d", A5);  else printf("N");
}