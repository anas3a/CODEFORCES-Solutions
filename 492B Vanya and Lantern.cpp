#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, l, a, x, y;
    double dis = 0;
    cin >> n >> l;
    vector <int> v;
    v.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    v.push_back(l);
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] - v[i - 1] >= dis)
            dis = v[i] - v[i - 1];
    }
    dis /= 2;
    x = v[1] - v[0];
    y = v[n + 1] - v[n];
    if (dis > x && dis > y)
        cout << setprecision(14) << dis << endl;
    else
    {
        if (x > y)
            cout << x << endl;
        else
            cout << y << endl;
    }
    return 0;
}
