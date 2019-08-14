#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n, a, b = 1, m, ct = 0;
    cin >> n >> m;
    while (m--)
    {
        cin >> a;
        if (a > b)
            ct += a - b;
        else if (b > a)
        {
            ct += n - b;
            ct += a;
        }
        b = a;
    }
    cout << ct << endl;
    return 0;
}
