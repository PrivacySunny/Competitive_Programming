#include <bits/stdc++.h>
#define mod 1000000007 
#define YES cout << 'YES'
#define NO cout << 'NO'
#define li long long int
#define uli unsigned long long
#define li_128 __int128_t
#define li_64 __int64
#define li_32 __int32
#define ld long double
#define dd double
#define fast_ std::ios_base::sync_with_stdio(0);
#define cin_ std::cin.tie(0);
#define cout_ std::cout.tie(0);
using namespace std;
bool mycomp(pair<li, li> &a, pair<li, li> &b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    std::cin >> n;
    vector<pair<li, li>> v;
    for(int i = 0; i < n;i++)
    {
        li a, b;
        std::cin >> a >> b;
        v.push_back(make_pair(b, a));
    }
    sort(v.begin(), v.end());
    int x = 0;
    int sum = 0;
    // int xx = INT_MIN;
    for(int i = 1; i < n; i++)
    {
        if(v[i].second > v[x].first)
        {
            x = i;
            sum++;
        }
        // else
        // {
        //     xx = max(xx, sum);
        //     sum = 0;
        // }
    }
    // xx = max(xx, sum);
    std::cout << sum + 1 << endl;
    return 0;
}