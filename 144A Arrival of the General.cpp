#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, ct = 0, swp, chk;
    cin >> n;
    vector <int> v, w;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    w = v;
    sort(w.begin(), w.end());
    reverse(w.begin(), w.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (w[n - 1] == v[i])
        {
           chk = i;
           break;
        }
        else
            ct++;
    }
    swp = ct;
    ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (w[0] == v[i])
        {
            if (i > chk)
                ct--;
            break;
        }
        else
            ct++;
    }
    swp += ct;
    cout << swp << endl;
    return 0;
}
