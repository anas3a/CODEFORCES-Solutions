#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, ct = 0;
    cin >> n >> m;
    while (true)
    {
        if (n == 0 || m == 0)
            break;
        else
        {
            n--;
            m--;
            ct++;
        }
    }
    if (ct % 2 == 1)
        cout << "Akshat" << endl;
    else
        cout << "Malvika" << endl;
    return 0;
}
