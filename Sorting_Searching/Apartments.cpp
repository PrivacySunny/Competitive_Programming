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
const int N_6 = 1000000;
const int N_7 = 10000000;
const int N_8 = 100000000;
const int N_9 = 1000000000;
using namespace std;
int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;
    vector<ll> __(n);
    vector<ll> _(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> __[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> _[i];
    }
    sort(__.begin(), __.end());
    vector<ll> ___;
    for (int i = 1; i < n; i++)
    {
        if (__[i] != __[i - 1])
        {
            ___.push_back(__[i - 1]);
        }
    }
    ___.push_back(__[n - 1]);
    int x_n = ___.size();
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int x = lower_bound(___.begin(), ___.end(), _[i] + k) - ___.begin();
        if (x == 0 && ___[x] <= _[i] + k && ___[x] >= _[i] - k)
        {
            sum++;
            ___.erase(___.begin() + x);
        }
        else if (x == x_n)
        {
            if ((___[x - 1] <= _[i] + k && ___[x - 1] >= _[i] - k))
            {
                sum++;
                ___.erase(___.begin() + x - 1);
            }
            else if ((___[x - 2] <= _[i] + k && ___[x - 2] >= _[i] - k))
            {
                sum++;
                ___.erase(___.begin() + x - 2);
            }
        }
        else
        {
            if ((___[x] <= _[i] + k && ___[x] >= _[i] - k))
            {
                sum++;
                ___.erase(___.begin() + x);
            }
            else if ((___[x - 1] <= _[i] + k && ___[x - 1] >= _[i] - k))
            {
                sum++;
                ___.erase(___.begin() + x - 1);
            }
        }
        x_n = ___.size();
        // for(auto ii : ___)
        // {
        //     std::cout << ii << " ";
        // }
        // std::cout << "\n";
    }
    std::cout << sum << endl;
    return 0;
}