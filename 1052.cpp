#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> p(const string& l)
{
	vector<string>r;
	for (int i = 0; i < (int)l.size(); i++)
	{
		if (l[i] == '[')
		{
			string x;
			size_t j = i + 1;
			while (l[j] != ']')
			{
				x += l[j];
				j++;
			}
			r.push_back(x);
			i = j;
		}
	}
	return r;
}
int main()
{
	string s1, s2, s3;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, s3);
	vector<string>hand = p(s1);
	vector<string>eye = p(s2);
	vector<string>mouth = p(s3);
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int a1, a2, a3, a4, a5;
		cin >> a1 >> a2 >> a3 >> a4 >> a5;
		if (a1 < 1 || a1 >(int)hand.size() ||
			a2 < 1 || a2 >(int)eye.size() ||
			a3 < 1 || a3 >(int)mouth.size() ||
			a4 < 1 || a4 >(int)eye.size() ||
			a5 < 1 || a5 >(int)hand.size())
			cout << "Are you kidding me? @\\/@" << "\n";
		else
		{
			cout << hand[a1 - 1] << "(" << eye[a2 - 1] << mouth[a3 - 1]
				<< eye[a4 - 1] << ")" << hand[a5 - 1] << "\n";
		}
	}
}