#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        long long int a, b;
        std::cin >> a >> b;
        if((a + b) % 3 == 0 && (a == b) && (a != 0 && b != 0))
        {
            std::cout << "YES" << endl;
        }
        else if(abs(a - b) <= 4)
        {
            long long int x = (a + b);
            if(x % 2)
            {
                if((x - 3) % 3 == 0 && (x != a && x != b))
                {
                    std::cout << "YES" << endl;
                }
                else
                {
                    std::cout << "NO" << endl;
                }
            }
            else
            {
                if((x - 6) % 3 == 0)
                {
                    std::cout << "YES" << endl;
                }
                else
                {
                    std::cout << "NO" << endl;
                }
            }
        }
        else
        {
            std::cout << "NO" << endl;
        }
    }
}