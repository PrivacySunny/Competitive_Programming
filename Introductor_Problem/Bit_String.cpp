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
li power(int n, li m)
{
    li res = 1LL;
    while(m)
    {
        if(m & 1LL)
        {
            res = ((res % mod) * 1LL * (n % mod)) % mod;
        }
        n = (1LL * (n % mod) * (n % mod)) % mod;
        m >>= 1LL;
    }
    return res;
}
int main()
{
    fast_;
    cin_;
    cout_;
    li n;
    std::cin >> n;
    li x = power(2, n);
    std::cout << x << endl;
    return 0;
}