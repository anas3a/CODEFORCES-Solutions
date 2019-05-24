#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] == i)
            {
                cout << j + 1 << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
