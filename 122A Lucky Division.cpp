#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ct = 0;
    cin >> n;
    int a[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int i = 0; i < 14; i++)
    {
        if (n % a[i] == 0)
        {
            ct++;
            break;
        }
    }
    if (ct == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
