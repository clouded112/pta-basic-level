#include <iostream>
#include <string>
using namespace std;
int main()
{
	string psw;
	int n;
	cin >> psw >> n;
	getchar();
	string att;
	for (int i = 0; i < n; i++)
	{
		getline(cin, att);
		if (att == "#")
			return 0;
		if (att == psw)
		{
			cout << "Welcome in" << endl;
			return 0;
		}
		else
		{
			cout << "Wrong password: " << att << endl;
		}
	}
	cout << "Account locked" << endl;
	return 0;
}