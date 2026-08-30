#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int val(char c)
{
	if (c >= '0' && c <= '9')return c - '0';
	return c - 'a' + 10;
}
char chr(int x)
{
	if (x < 10)return '0' + x;
	return 'a' + (x - 10);
}
int main() 
{
	string a, b;
	cin >> a >> b;
	string ans;
	int i = (int)a.size() - 1;
	int j = (int)b.size() - 1;
	int c = 0;
	while (i >= 0 || j >= 0 || c)
	{
		int s = c;
		if (i >= 0)s += val(a[i--]);
		if (j >= 0)s += val(b[j--]);
		ans.push_back(chr(s % 30));
		c = s / 30;
	}
	reverse(ans.begin(), ans.end());
	int pos = 0;
	while (pos + 1 < (int)ans.size() && ans[pos] == '0')++pos;
	cout << ans.substr(pos);
	return 0;
}