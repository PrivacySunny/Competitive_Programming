#include <bits/stdc++.h>
#define mod 1000000007
#define YES cout << 'YES'
#define NO cout << 'NO'
#define li long long int
#define ld long long double
#define dd double
#define fast_ std::ios_base::sync_with_stdio(0);
#define cin_ std::cin.tie(0);
#define cout_ std::cout.tie(0);
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    for (int i = 1; i <= t; i++)
    {
        li x = (1LL) * (((i * i) * ((i * i) - 1LL)) / 2) - 4 * (i - 1LL) * (i - 2);
        std::cout << x << endl;
    }
    return 0;
}