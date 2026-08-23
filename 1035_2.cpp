#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int i;
    for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);
    int j;
    for (j = i + 1; j < n && b[j] == a[j]; j++);
    if (j == n)
    {
        cout << "Insertion Sort" << "\n";
        int temp = b[i + 1];
        while (i >= 0 && b[i] > temp){b[i + 1] = b[i];i--;}
        b[i + 1] = temp;
        for (int k = 0; k < n; k++) 
        { 
            if (k) cout << ' ';
            cout << b[k]; 
        }
    }
    else
    {
        cout << "Merge Sort" << "\n";
        for (int step = 2; ; step *= 2)
        {
            for (int k = 0; k < n; k += step)sort(a.begin() + k, a.begin() + min(k + step, n));
            if (equal(a.begin(), a.end(), b.begin()))
            {
                step *= 2;
                for (int k = 0; k < n; k += step)sort(a.begin() + k, a.begin() + min(k + step, n));
                break;
            }
        }
        for (int k = 0; k < n; k++) 
        { 
            if (k) cout << ' ';
            cout << a[k]; 
        }
    }
    return 0;
}