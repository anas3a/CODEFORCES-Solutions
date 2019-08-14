
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n;
    int k;
    cin >> n >> k;
    while (true)
    {
        if (n % 10 != 0)
            n--;
        else
            n /= 10;
        k--;
        if (k == 0)
            break;
    }
    cout << n << endl;
    return 0;
}
