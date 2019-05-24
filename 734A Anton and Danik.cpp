#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, d;
    string s;
    cin >> n >> s;
    a = count(s.begin(), s.end(), 'A');
    d = count(s.begin(), s.end(), 'D');
    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else if (d == a)
        cout << "Friendship" << endl;
    return 0;
}
