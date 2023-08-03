#include <bits/stdc++.h>
#define mod 1000000007
#define YES cout << 'YES'
#define NO cout << 'NO'
#define li long long int
#define ll long long
#define uli unsigned long long
#define li_128 __int128_t
#define li_64 __int64
#define li_32 __int32
#define ld long double
#define dd double
#define fast_ std::ios_base::sync_with_stdio(0);
#define cin_ std::cin.tie(0);
#define cout_ std::cout.tie(0);
const int N_5 = 100000;
const int N_6 = 1000000;
const int N_7 = 10000000;
const int N_8 = 100000000;
const int N_9 = 1000000000;
using namespace std;
int main()
{
    int n;
    ll x;
    std::cin >> n >> x;
    vector<ll> __(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> __[i];
    }
    sort(__.begin(), __.end());
    int sum = 0;
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        if (__[l] + __[r] <= x)
        {
            // std::cout << __[l] << " " << __[r] << endl;
            l++;
            r--;
            sum++;
        }
        else if (r - 1 == l)
        {
            sum += 2;
            break;
        }
        else
        {
            // std::cout << __[l] << " " << __[r] << endl;
            r--;
            sum++;
        }
    }
    if (l == r)
    {
        sum++;
    }
    std::cout << sum << endl;
    return 0;
}