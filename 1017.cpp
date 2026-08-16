#include <iostream>
#include <string>
using namespace std;
int main()
{
	string A;
	int B;
	cin >> A >> B;
    string q;
    int r = 0;  
    for (int i = 0; i <A.size(); i++)
    {
        int c = r * 10 + (A[i] - '0');
        q.push_back('0' + c / B);
        r = c % B;
    }
    int pos = 0;
    while (pos < q.size() - 1 && q[pos] == '0') pos++;
    cout << q.substr(pos) << " " << r ;
    return 0;
}