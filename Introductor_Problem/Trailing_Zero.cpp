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
li Base(int n, li m)
{
    int x = 0;
    int x_x = 1LL;
    while(m / x_x)
    {
        x_x = x_x * n;
        x = x + (m / (x_x));
    }
    return x;
}
int main()
{
    li n;
    std::cin >> n;
    li x_2 = Base(2, n);
    li x_5 = Base(5, n);
    std::cout << min(x_2, x_5) << endl;
    return 0;
}