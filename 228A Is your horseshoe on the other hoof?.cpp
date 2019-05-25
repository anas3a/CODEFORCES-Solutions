#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, ct = 0, v[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        for (int j = 0; j < i; j++)
        {
            if (v[j] == a)
                {
                    ct++;
                    v[j] = 0;
                }
        }
        v[i] = a;
    }
    cout << ct << endl;
    return 0;
}
