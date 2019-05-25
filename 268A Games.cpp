#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, ct = 0;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < v.size(); i += 2)
    {
        for (int j = 1; j < v.size(); j += 2)
        {
            if (v[i] == v[j])
                ct++;
        }
    }
    cout << ct << endl;
    return 0;
}
