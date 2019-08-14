#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, b;
    cin >> n;
    vector <long long> a(100004, 0), sum(100004, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a[b]++;
    }
    sum[0] = 0;
    sum[1] = a[1];
    for (int i = 2; i < 100001; i++)
    {
        sum[i] = max(sum[i - 1], sum[i - 2] + a[i] * i);
    }
    cout << sum[100000] << endl;
    return 0;
}
