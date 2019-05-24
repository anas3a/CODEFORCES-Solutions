#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, mid;
    cin >> n >> k;
    if (n % 2 == 0)
        mid = n / 2;
    else
        mid = (n / 2) + 1;
    if (k <= mid)
        cout << k * 2 - 1 << endl;
    else
        cout << (k - mid) * 2 << endl;
    return 0;
}
