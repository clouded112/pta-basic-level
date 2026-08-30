#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	string s = to_string(a * b);
	reverse(s.begin(), s.end());
	int i = 0;
	while (i < (int)s.size() && s[i] == '0') i++;
	if (i == (int)s.size()) cout << 0;
	else for (; i < (int)s.size(); i++) cout << s[i];
	return 0;
}