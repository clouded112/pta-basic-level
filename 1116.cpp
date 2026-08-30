#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string n,res;
	cin >> n;
	if (n.size() % 2 != 0)cout << "Error: " << n.size() << " digit(s)";
	else
	{
		string b = n.substr(0, n.size() / 2);
		string a = n.substr(n.size() / 2);
		int c = 0;
        int borrow = 0;
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--)
        {
            int da = i >= 0 ? a[i] - '0' : 0;
            int db = j >= 0 ? b[j] - '0' : 0;
            int v = da - db - borrow;
            if (v < 0) { v += 10; borrow = 1; }
            else borrow = 0;
            res.push_back(char('0' + v));
        }
        while (res.size() > 1 && res.back() == '0')
            res.pop_back();
        reverse(res.begin(), res.end());
        if (res == "2")cout << "Yes: " << a << " - " << b << " = 2";
        else cout << "No: " << a << " - " << b << " != 2";
	}
	return 0;
}