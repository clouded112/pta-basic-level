#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
	string grid[26][7];
	for (int i = 0; i < 26; i++)
		for (int j = 0; j < 7; j++)
			cin >> grid[i][j];
	getchar();
	string line, cur;
	getline(cin, line);
	vector<string> words;
	for (char c : line) 
	{
		if (isupper(c)) cur += c;
		else if (!cur.empty()) 
		{ 
			words.push_back(cur); 
			cur.clear();
		}
	}
	if (!cur.empty()) words.push_back(cur);
	for (size_t wi = 0; wi < words.size(); wi++)
	{
		if (wi) cout << '\n';
		for (int j = 0; j < 7; j++)
		{
			for (size_t k = 0; k < words[wi].size(); k++) 
			{
				if (k) cout << ' ';
				cout << grid[words[wi][k] - 'A'][j];
			}
			cout << '\n';
		}
	}
	return 0;
}