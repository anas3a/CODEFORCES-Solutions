#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1 = "WUB";
    int ct = 1;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (ct != 0)
                cout << " ";
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}
