#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, year;
    cin >> y;
    while(true)
    {
        y++;
        year = y;
        bool check[10] = {false};
        while(year)
        {
            if (check[year % 10])
                break;
            else
                check[year % 10] = true;
            year /= 10;
        }
        if (year == 0)
            break;
    }
    cout << y << endl;
    return 0;
}
