#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	string w[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int i = 0, n1 = min(s1.size(), s2.size());
	while (i < n1 && !(s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G')) i++;
	cout << w[s1[i] - 'A'] << ' ';
	i++;
	while (i < n1)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] >= '0' && s1[i] <= '9')
			{
				cout << '0' << s1[i];
				break;
			}
			else if (s1[i] >= 'A' && s1[i] <= 'N')
			{
				cout << (s1[i] - 'A' + 10);
				break;
			}
		}
		i++;
	}
	cout << ':';
	int n2 = min(s3.size(), s4.size());
	for (int j = 0; j < n2; j++)
	{
		char ch = s3[j];
		if (s3[j] == s4[j] && ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')))
		{
			if (j < 10) cout << '0';
			cout << j << endl;
			break;
		}
	}
	return 0;
}