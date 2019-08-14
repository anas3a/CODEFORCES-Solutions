#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, t, a, sum = 0;
    cin >> n >> t;
    vector <int> v;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[sum];
        if (sum >= t - 1)
            break;
    }
    if (sum == t - 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
