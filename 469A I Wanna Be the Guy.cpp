#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, ct = 0;
    cin >> t;
    vector <bool> v(t, false);
    int p, q;
    cin >> p;
    while (p--)
    {
        cin >> n;
        v[n - 1] = true;
    }
    cin >> q;
    while (q--)
    {
        cin >> n;
        v[n - 1] = true;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == true)
            ct++;
        else
            break;
    }
    if (ct == v.size())
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
