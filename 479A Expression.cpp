#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, mx = 0;
    cin >> a >> b >> c;
    if (a + b + c > mx)
        mx = a + b + c;
    if (a * b * c > mx)
        mx = a * b * c;
    if (a + b * c > mx)
        mx = a + b * c;
    if (a * b + c > mx)
        mx = a * b + c;
    if ((a + b) * c > mx)
        mx = (a + b) * c;
    if (a * (b + c) > mx)
        mx = a * (b + c);
    cout << mx << endl;
}
