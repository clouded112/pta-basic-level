#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int>champ(N); 
    int best = 0;  
    for (int i = 0; i < N; ++i) 
    {
        int maxW = 0;
        for (int j = 0; j < M; ++j)
        {
            int w;
            cin >> w;
            if (w > maxW) maxW = w;
        }
        champ[i] = maxW;
        if (maxW > best) best = maxW;
    }
    for (int i = 0; i < N; ++i) 
    {
        if (i) cout << ' ';
        cout << champ[i];
    }
    cout << '\n' << best << '\n';
    return 0;
}