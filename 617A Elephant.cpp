#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ct = 0;
    cin >> n;
    ct = n / 5;
    n %= 5;
    ct += n / 4;
    n %= 4;
    ct += n / 3;
    n %= 3;
    ct += n / 2;
    n %= 2;
    ct += n / 1;
    cout << ct << endl;
    return 0;
}
