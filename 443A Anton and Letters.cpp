#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ct = 0;
    string s;
    getline(cin, s);
    vector <bool> v(26, false);
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (islower(s[i]))
        v[s[i] - 97] = true;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == true)
            ct++;
    }
    cout << ct << endl;
    return 0;
}
