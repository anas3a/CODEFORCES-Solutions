#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m = 5, ct = 0;
    cin >> n;
    while (n--)
    {
        int i;
        cin >> i;
        if (i != m)
            ct++;
        m = i;
    }
    cout << ct << endl;
    return 0;
}
