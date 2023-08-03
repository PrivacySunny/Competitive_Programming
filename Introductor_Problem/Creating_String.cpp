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
set<string> vvv;
vector<string> v;
int sum = 0;
void permut(string str, int k, vector<string> &v)
{
    if (k >= int(str.size()))
    {
        // std::cout << str << endl;
        if (vvv.find(str) == vvv.end())
        {
            sum++;
            vvv.insert(str);
            v.push_back(str);
        }
        return;
    }
    for (int i = k; i < int(str.size()); i++)
    {
        swap(str[i], str[k]);
        permut(str, k + 1, v);
        swap(str[i], str[k]);
    }
}
int main()
{
    string str;
    std::cin >> str;
    permut(str, 0, v);
    std::cout << sum << endl;
    sort(v.begin(), v.end());
    for (auto ii : v)
    {
        std::cout << ii << endl;
    }
    return 0;
}