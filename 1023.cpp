#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> cnt(10);
	for (int i = 0; i < 10; i++)cin >> cnt[i];
	for (int i = 1; i < 10; i++) 
	{
		if (cnt[i] > 0) 
		{
			cout << i;
			cnt[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < cnt[i]; j++)
			cout << i;
	}
	return 0;
}