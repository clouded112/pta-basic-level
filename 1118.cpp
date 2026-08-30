#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;
int main()
{
	map<string, int> pinyin =
	{
		{"ling",0},{"yi",1},{"er",2},{"san",3},{"si",4},
		{"wu",5},{"liu",6},{"qi",7},{"ba",8},{"jiu",9}
	};
	string phone;
	for (int i = 0; i < 11; ++i)
	{
		string s;
		cin >> s;
		int digit;
		if (s.find("sqrt") == 0)
		{
			int x = stoi(s.substr(4));
			digit = (int)sqrt(x);
		}
		else if (pinyin.count(s))
		{
			digit = pinyin[s];
		}
		else
		{
			string ops = "+-*/%^";
			size_t pos = s.find_first_of(ops);
			if (pos == string::npos)
			{
				digit = stoi(s);
			}
			else
			{
				int a = stoi(s.substr(0, pos));
				int b = stoi(s.substr(pos + 1));
				char op = s[pos];
				switch (op)
				{
				case '+': digit = a + b; break;
				case '-': digit = a - b; break;
				case '*': digit = a * b; break;
				case '/': digit = a / b; break;
				case '%': digit = a % b; break;
				case '^':
				{
					int r = 1;
					for (int k = 0; k < b; ++k) r *= a;
					digit = r;
					break;
				}
				}
			}
		}
		phone += char('0' + digit);
	}
	cout << phone << '\n';
	return 0;
}