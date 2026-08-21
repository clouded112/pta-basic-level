#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string A,B;
	cin >> A >> B;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	while (A.size() < max(A.size(), B.size()))A += '0';
	while (B.size() < max(A.size(), B.size()))B += '0';
	string ans;
	for (int i = 0; i < A.size(); i++)
	{
		int a = A[i] - '0';
		int b = B[i] - '0';
		if ((i + 1) % 2 == 0)
		{
			int k = b - a;
			if (k < 0)k += 10;
			ans += (char)('0'+k);
		}
		if (i % 2 == 0)
		{
			int k = (a + b) % 13;
			if (k < 10)ans += (char)('0' + k);
			else if (k == 10)ans += 'J';
			else if (k == 11)ans += 'Q';
			else if (k == 12)ans += 'K';
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
}