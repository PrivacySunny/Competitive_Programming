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
    li n;
    std::cin >> n;
    li x = (n * (n + 1)) / 2;
    li xx = x / 2;
    set<int> v;
    set<int> vv;
    if (x % 2 == 0)
    {
        std::cout << "YES" << endl;
        for (int i = n; i >= 1; i--)
        {
            if (xx <= i)
            {
                v.insert(xx);
                break;
            }
            else
            {
                v.insert(i);
                xx -= i;
            }
        }
        // sort(v.begin(), v.end());
        for (int i = 1; i <= n; i++)
        {
            if(v.find(i) == v.end())
            {
                vv.insert(i);
            }
        }
        // sort(vv.begin(), vv.end());
        std::cout << v.size() << endl;
        for(auto ii : v)
        {
            std::cout << ii << " ";
        }
        std::cout << endl << vv.size() << endl;
        for(auto ii : vv)
        {
            std::cout << ii << " ";
        }
    }
    else
    {
        std::cout << "NO" << endl;
    }
    return 0;
}