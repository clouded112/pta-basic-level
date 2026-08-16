#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
struct mck
{
	double kc;
	double zj;
	double dj;
};
int main()
{
	int N;
	int D;
	cin >> N >> D;
	vector<mck>mc(N);
	for (int i = 0;i < N;i++)cin >> mc[i].kc;
	for (int i = 0;i < N;i++)cin >> mc[i].zj;
	for (int i = 0;i < N;i++)mc[i].dj=mc[i].zj/mc[i].kc;
	sort(mc.begin(), mc.end(), [](const mck& a, const mck& b) {return a.dj > b.dj;});
	double p=0;
	for (int i = 0;i < N && D>0;i++)
	{
		if (mc[i].kc < D) 
		{
			p += mc[i].zj;
			D -= mc[i].kc;
		}
		else
		{
			p += mc[i].dj * D;
			D = 0;
		}
	}
	cout << fixed << setprecision(2) << p;
}