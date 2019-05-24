#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, t, dif;
    cin >> n >> m;
    vector <int> v;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());

    dif = v[n - 1] - v[0];

    for (int i = 0; i <= m - n; i++)
    {
        if (v[i + n - 1] - v[i] < dif)
            dif = v[i + n - 1] - v[i];
    }
    cout << dif << endl;
    return 0;
}
