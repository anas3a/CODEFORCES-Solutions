#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <bool> v(26, false);
    string s;
    int n, ct = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        s[i] = toupper(s[i]);
        v[s[i] - 65] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i])
            ct++;
        else
            break;
    }
    if (ct == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
