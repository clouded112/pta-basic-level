#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string base, a, b;
	cin >> base >> a >> b;
	reverse(base.begin(), base.end());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int len = base.size();
	while (a.size() < len) a += '0';
	while (b.size() < len) b += '0';
	string res;
	int c = 0;
	for (int i = 0; i < len; i++)
	{
		int r = (base[i] == '0') ? 10 : base[i] - '0';
		int sum= (a[i] - '0') + (b[i] - '0') + c;
		c = sum / r;
		res += char('0' + sum % r);
	}
	if(c)res+= char('0' + c);
	reverse(res.begin(), res.end());
	int pos = 0;
	while (pos < res.size() - 1 && res[pos] == '0')pos++;
	cout << res.substr(pos);
	return 0;
}
