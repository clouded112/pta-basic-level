#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int h1, h2, n;
    cin >> h1 >> h2 >> n;
    const int MAX = 100000;
    static int data[MAX], nxt[MAX];   
    fill(nxt, nxt + MAX, -1);
    for (int i = 0; i < n; i++)
    {
        int addr, d, ne;
        cin >> addr >> d >> ne;
        data[addr] = d;
        nxt[addr] = ne;
    }
    vector<int> L1, L2;
    for (int cur = h1; cur != -1; cur = nxt[cur]) L1.push_back(cur);
    for (int cur = h2; cur != -1; cur = nxt[cur]) L2.push_back(cur);
    vector<int> A, B;
    if (L1.size() >= L2.size()) { A = L1; B = L2; }
    else { A = L2; B = L1; }
    reverse(B.begin(), B.end());
    vector<int> res;
    int i = 0, j = 0;
    while (i < (int)A.size())
    {
        res.push_back(A[i++]);
        if (i < (int)A.size()) res.push_back(A[i++]);
        if (j < (int)B.size()) res.push_back(B[j++]);
    }
    for (int k = 0; k < (int)res.size(); k++)
    {
        printf("%05d %d ", res[k], data[res[k]]);
        if (k + 1 < (int)res.size()) printf("%05d\n", res[k + 1]);
        else printf("-1\n");
    }
    return 0;
}