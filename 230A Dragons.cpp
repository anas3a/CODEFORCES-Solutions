#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int s, n, x, y;
    bool ck = true;
    vector < pair <int, int> > vp;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
    }
    sort(vp.begin(), vp.end());
    for (int i = 0; i < n; i++)
    {
        if (s > vp[i].first)
        {
            s += vp[i].second;
        }
        else
        {
            ck = false;
            break;
        }
    }
    if (ck)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
