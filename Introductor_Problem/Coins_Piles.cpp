#include <bits/stdc++.h>
using namespace std;
bool Search(long long int a, long long int b)
{
    long long int x = min(a, b);
    long long int y = max(a, b);
    int xx = 0;
    while (x != y)
    {
        // std::cout << x << " " << y << endl;
        if (x > y)
        {
            x = x - 2;
            y = y - 1;
        }
        else
        {
            y = y - 2;
            x = x - 1;
        }
        xx++;
    }
    return (x % 3 == 0 && y % 3 == 0);
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int c = min(a, b);
        long long int d = max(a, b);
        if ((2 * c) == d)
        {
            std::cout << "YES" << endl;
        }
        else if ((2 * c) < d)
        {
            std::cout << "NO" << endl;
        }
        else
        {
            long long int x = d - c;
            if (Search(c - (x - 1LL), d - (2 * (x - 1LL))))
            {
                std::cout << "YES" << endl;
            }
            else
            {
                std::cout << "NO" << endl;
            }
        }
    }
}