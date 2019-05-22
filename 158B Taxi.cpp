#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ct = 0;
    vector <int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    int c1, c2, c3, c4;
    c1 = count(v.begin(), v.end(), 1);
    c2 = count(v.begin(), v.end(), 2);
    c3 = count(v.begin(), v.end(), 3);
    c4 = count(v.begin(), v.end(), 4);

    ct = c4 + c3;
    c1 -= c3;
    ct += c2 / 2;
    if (c2 % 2 == 1)
    {
        ct++;
        c1 -= 2;
    }
    if (c1 > 0)
    {
        ct += c1 / 4;
        if (c1 % 4 != 0)
            ct++;
    }
    cout << ct << endl;
    return 0;
}
