#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	cin >> n;
	int sum=0;
	for (char a : n)//和sum
	{
		sum += a-'0';
	}
	string py[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	string s = to_string(sum);
	for (int i = 0; i < s.size(); i++)
	{
		if (i > 0)
		{
			cout <<" ";
		}
		cout << py[s[i] - '0'];
	}
	return 0;
}