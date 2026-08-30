#include <iostream>
#include <string>
using namespace std;
int main()
{
	int K;
	cin >> K;
	while (K--)
	{
		string s;
		cin >> s;
		if (s.size() <= 1)
		{
			cout << "Yes\n";
			continue;
		}
		bool ok = true;
		for (int len = 2; len <= (int)s.size(); len++)
		{
			int rem = 0;
			for (int j = 0; j < len; j++)
				rem = (rem * 10 + (s[j] - '0')) % len;
			if (rem != 0)
			{
				ok = false;
				break;
			}
		}
		cout << (ok ? "Yes\n" : "No\n");
	}
	return 0;
}