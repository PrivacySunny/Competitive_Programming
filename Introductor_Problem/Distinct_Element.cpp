#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> ss;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ss.insert(x);
    }
    cout << ss.size() << endl;
}