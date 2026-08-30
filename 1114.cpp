#include <iostream>
#include <string>
using namespace std;
bool isp(string x)
{
	int y = stoi(x);
	if (y < 2) return false;
	for (int i = 2; i * i <= y; i++)
		if (y % i == 0)return false;
	return true;
}
int main()
{
	string s;
	cin >> s;
	bool all = true;
	for (size_t i = 0; i < s.size() ; i++)
	{
		string m = s.substr(i);
		if (!isp(m))all = false;
		cout << m << " " << ((isp(m)) ? "Yes" : "No") << "\n";
	}
	if (all)cout << "All Prime!";
	return 0;
}