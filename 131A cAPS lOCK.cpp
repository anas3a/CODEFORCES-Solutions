#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int ct = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i]))
            ct++;
    }
    if (ct == s.size() - 1 && islower(s[0]))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
                putchar(toupper(s[i]));
            else
                putchar(tolower(s[i]));
        }
        cout << endl;
    }
    else if (ct == s.size())
    {
        for (int i = 0; i < s.size(); i++)
        {
            putchar(tolower(s[i]));
        }
        cout << endl;
    }
    else
        cout << s << endl;
    return 0;
}
