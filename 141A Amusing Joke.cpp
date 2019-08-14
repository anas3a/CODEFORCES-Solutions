#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s1, s2, s3;
    int f1, f2;
    cin >> s1 >> s2 >> s3;
    if (s3.size() != s1.size() + s2.size())
        cout << "NO" << endl;
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = 0; j < s3.size(); j++)
            {
                if (s1[i] == s3[j])
                {
                    s3.erase(j, 1);
                    break;
                }
            }
        }
        sort (s2.begin(), s2.end());
        sort (s3.begin(), s3.end());
        if (s3 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
