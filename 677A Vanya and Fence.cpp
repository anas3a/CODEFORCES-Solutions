#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, i, ct = 0;
    cin >> n >> h;
    while (n--)
    {
        cin >> i;
        if (i > h)
            ct += 2;
        else
            ct++;
    }
    cout << ct << endl;
    return 0;
}
