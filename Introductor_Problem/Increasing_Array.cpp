#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int x = v[0];
    long long int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(v[i] >= x)
        {
            x = v[i];
            continue;
        }
        else
        {
            sum = sum + (x - v[i]);
        }
        // cout << sum << " " << x << endl;
    }
    cout << sum << endl;
}