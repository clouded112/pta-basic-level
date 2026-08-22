#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main()
{
    string s1, s2;
    int k;
    cin >> s1 >> s2 >> k;
    int p1 = s1.find('/');
    int p2 = s2.find('/');
    int n1 = stoi(s1.substr(0, p1));
    int d1 = stoi(s1.substr(p1 + 1));
    int n2 = stoi(s2.substr(0, p2));
    int d2 = stoi(s2.substr(p2 + 1));
    if ((long long)n1 * d2 > (long long)n2 * d1)
    {
        swap(n1, n2);
        swap(d1, d2);
    }
    bool first = true;
    for (int i = 1; i < k; i++) 
    {
        if ((long long)i * d1 > (long long)n1 * k && (long long)i * d2 < (long long)n2 * k &&  gcd(i, k) == 1)           
        {
            if (!first) cout << " ";
            first = false;
            cout << i << "/" << k;
        }
    }
}