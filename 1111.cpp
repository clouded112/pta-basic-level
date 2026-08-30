#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
string pad(int x, int w) 
{
    string t = to_string(x);
    while ((int)t.size() < w) t = "0" + t; 
    return t;
}
int main()
{
    map<string, int> month = 
    {
        {"Jan",1},{"Feb",2},{"Mar",3},{"Apr",4},{"May",5},{"Jun",6},
        {"Jul",7},{"Aug",8},{"Sep",9},{"Oct",10},{"Nov",11},{"Dec",12}
    };
    int N; cin >> N;
    while (N--) 
    {
        string mon;
        int day, year;
        char temp;
        cin >> mon >> day >> temp >> year;
        string ss = pad(year, 4) + pad(month[mon], 2) + pad(day, 2);
        string s = ss;
        reverse(s.begin(), s.end());
        bool ok = (s==ss);
        cout << (ok ? 'Y' : 'N') << ' ' << ss << '\n';
    }
    return 0;
}