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
vector<vector<char>> v(8, vector<char> (8, 0));
int c = 0;
bool is_safe(int i, int j)
{
    if(v[i][j] == '*')
    {
        return false;
    }
    for(int k = i; k >= 0; k--)
    {
        if(v[k][j] == 'Q')
        {
            return false;
        }
    }
    for(int k = i, l = j; k >= 0 && l >= 0; k--, l--)
    {
        if(v[k][l] == 'Q')
        {
            return false;
        }
    }
    for(int k = i, l = j; k >= 0 && l < 8; k--, l++)
    {
        if(v[k][l] == 'Q')
        {
            return false;
        }
    }
    return true;
}
void solve(int i = 0)
{
    if(i == 8)
    {
        c++;
        return;
    }
    for(int j = 0; j < 8; j++)
    {
        if(is_safe(i, j))
        {
            v[i][j] = 'Q';
            solve(i + 1);
            v[i][j] = '.';
        }
    }
}
int main()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cin >> v[i][j];
        }
    }
    solve();
    std::cout << c << endl;
    return 0;
}