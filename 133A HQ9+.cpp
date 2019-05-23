#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1 = "HQ9";
    int ct = 0;
    cin >> s;
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s1[i] == s[j])
            {
                ct++;
                break;
            }
        }
    }
    if (ct != 0)
    cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
