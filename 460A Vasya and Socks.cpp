#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m, i = 0, ct = 0;
    cin >> n >> m;
    while (n--)
    {
        i++;
        if (i == m)
            {
                n++;
                i = 0;
            }
        ct++;
    }
    cout << ct << endl;
    return 0;
}
