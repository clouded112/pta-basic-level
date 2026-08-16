#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
class xs
{
public:
	int score;
	string id;
	string name;
};
class cmp
{
public:
	bool operator()(const xs& a, const xs& b)const
	{
		return a.score > b.score;
	}
};
int main()
{
	int n;
	cin >> n;
	string name, id;
	int score;
	multiset<xs, cmp>s;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> id >> score;
		xs stu;
		stu.id = id;
		stu.score = score;
		stu.name = name;
		s.insert(stu);
	}
	cout << s.begin()->name << " " << s.begin()->id<<"\n";
	cout << s.rbegin()->name << " " << s.rbegin()->id;
}