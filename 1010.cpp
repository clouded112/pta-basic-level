#include <iostream>
#include <string>
#include <sstream>
#include <deque>
using namespace std;
int main()
{
	string l;
	getline(cin, l);
	istringstream iss(l);
	string a;//xishu
	string c;//zhishu
	deque<int>x;
	deque<int>z;
	while (iss >> a)
	{
		x.push_back(stoi(a));
		iss >> c;
		z.push_back(stoi(c));
	}
	bool first = true;
	for (int i = 0; i < x.size(); i++)
	{
		if (z[i] == 0) continue;   
		if (!first) cout << " ";
		cout << x[i] * z[i] << " " << z[i] - 1;
		first = false;
	}
	if (first) cout << "0 0";
}