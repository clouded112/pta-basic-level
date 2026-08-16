#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string l;
	cin.ignore();
	for (int i = 0;i < n;i++)
	{
		getline(cin,l);
		istringstream iss(l);
		long long A, B, C;
		iss >> A;
		iss >> B;
		iss >> C;
		cout << "Case #" << i + 1 << ": ";
		cout << ((A+B>C) ? "true" : "false") << endl;
	}
	return 0;
}