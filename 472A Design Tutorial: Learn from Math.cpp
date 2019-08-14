#include <bits/stdc++.h>
 
using namespace std;
 
bool cmpst(int n)
{
    int ct = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            ct++;
    }
    if (ct != 0)
        return true;
    else
        return false;
}
int main()
{
    int n, n1, n2;
    cin >> n;
    if (n % 2 == 0)
    {
        n1 = n2 = n / 2;
    }
    else
    {
        n1 = n / 2 + 1;
        n2 = n / 2;
        while(!(cmpst(n1) && cmpst(n2)))
        {
            n1--;
            n2++;
        }
    }
    cout << n1 << " " << n2 << endl;
    return 0;
}
