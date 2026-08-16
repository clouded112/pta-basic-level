#include <iostream>
using namespace std;
void l(int b,bool p[]) 
{
    for (int i = 2; i <= b; i++) p[i] = true; 
    p[0] = p[1] = false;
    for (int i = 2; i * i <= b; i++) 
    {
        if (p[i]) 
        {                            
            for (int j = i * i; j <= b; j += i)     
                p[j] = false;
        }
    }
}
int main()
{
    int const max = 200000;
    bool p[max+1];
    l(max, p);
    int a, b;
    cin >> a;
    cin >> b;
    int k[10001];
    int y=1;
    int j = 0;
    for (int i = 2; i < max &&y<=b; i++)
    {
        if (p[i]) 
        {
            k[y] = i;
            y++;
        }
    }
    for (int i = a; i < b+1; i++)
    {
        j++;
        cout << k[i];       
        if (i != b && j % 10 != 0)cout << " ";
        if (j % 10 == 0)cout << "\n";
    }
    return 0;
}