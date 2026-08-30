#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) cin >> w[i];
    vector<int> rw, rl; 
    for (int i = 0; i < n; )
    {
        int j = i;
        while (j < n && w[j] == w[i]) j++;
        rw.push_back(w[i]);
        rl.push_back(j - i);
        i = j;
    }
    int k = rw.size();
    vector<int> milk(k, 200);   
    for (int j = 1; j < k; j++)
        if (rw[j] > rw[j - 1])
            milk[j] = max(milk[j], milk[j - 1] + 100);
    for (int j = k - 2; j >= 0; j--)
        if (rw[j] > rw[j + 1])
            milk[j] = max(milk[j], milk[j + 1] + 100);
    long long total = 0;
    for (int j = 0; j < k; j++)
        total += (long long)milk[j] * rl[j];
    cout << total << endl;
    return 0;
}