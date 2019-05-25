#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, odd = 0, even = 0, oc, vc;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            even++;
            vc = i + 1;
        }
        else
        {
            odd++;
            oc = i + 1;
        }
    }
    if (odd < even)
        cout << oc << endl;
    else
        cout << vc << endl;
    return 0;
}
