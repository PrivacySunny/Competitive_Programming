#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int y, x;
        cin >> y >> x;
        long long int z = max(x, y);
        long long int xx = (z * z) - (z - 1);
        if(x == y)
        {
            cout << x * x - (x - 1) << endl;
            continue;
        }
        if(z % 2 == 0)
        {
            if(y > x)
            {
                cout << xx + abs(y - x) << endl;
            }
            else
            {
                cout << xx - abs(x - y) << endl;
            }
        }
        else
        {
            if(y > x)
            {
                cout << xx - abs(y - x) << endl;
            }
            else
            {
                cout << xx + abs(y - x) << endl;
            }
        }
    }
}