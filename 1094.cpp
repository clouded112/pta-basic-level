#include<iostream>
#include<string>
using namespace std;
bool isp(long long n)
{
	if (n < 2)return false;
	for (long long i = 2; i*i <=n; i++)
	{
		if (n % i == 0)return false;
	}
	return true;
}
int main()
{
	int l,k;
	string s;
	cin >> l >> k>>s;
	for (int i = 0; i+k <= l; i++)
	{
		 long long t = stoll(s.substr(i, k));
		 if (isp(t))
		 {
			 cout << s.substr(i, k);
			 return 0;
		 }
	}
	cout << "404";
	return 0;
}