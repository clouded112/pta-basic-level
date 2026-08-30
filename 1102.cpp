#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string id1, id2;
	int bestSales = -1;
	int bestMoney = -1;
	for (int i = 0; i < n; i++)
	{
		string id;
		int price;
		int sales;
		cin >> id >> price >> sales;
		if (sales > bestSales)
		{
			bestSales = sales;
			id1 = id;
		}
		int money = price * sales;
		if (money > bestMoney)
		{
			bestMoney = money;
			id2 = id;
		}
	}
	cout << id1 << " " << bestSales << "\n";
	cout << id2 << " " << bestMoney << "\n";
	return 0;
}