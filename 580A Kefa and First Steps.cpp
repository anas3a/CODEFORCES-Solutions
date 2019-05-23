#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, ct = 1, mx = 0;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            if (ct > mx)
                mx = ct;
            ct = 1;
        }
        else
            ct++;
    }
    if (ct > mx)
        mx = ct;
    cout << mx << endl;
    return 0;
}
