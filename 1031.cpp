#include <iostream>
#include <string>
using namespace std;
int main()
{
	bool pass = true;
	int w[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
	int jym[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string id;
		cin >> id;
		int sum = 0;
		bool v = true;
		for (int j = 0; j < 17; j++)if(!isdigit(id[j]))v=false;
		for (int i = 0; i < 17; i++)sum += w[i] * (id[i] - '0');
		int z = sum % 11;
		if (v&&id[17] == jym[z])continue;
		cout << id << "\n";
		pass = false;
	}
	if (pass)cout << "All passed";
	return 0;
}