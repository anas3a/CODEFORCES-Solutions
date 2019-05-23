#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, ct = 0;
    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        if (q - p >= 2)
            ct++;
    }
    cout << ct << endl;
    return 0;
}
