#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int k;
        cin >> k;
        int mod = 1;
        while (mod <= k) mod *= 10;
        int sq = k * k;
        bool ok = false;
        for (int n = 1; n < 10; n++)   
        {
            int v = n * sq;
            if (v % mod == k)
            {
                cout << n << " " << v << "\n";
                ok = true;
                break;
            }
        }
        if (!ok) cout << "No\n";
    }
    return 0;
}