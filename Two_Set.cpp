#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        long long int x;
        x = n;
        if ((n / 2) % 2 != 0)
        {
            std::cout << "NO" << endl;
        }
        else
        {
            std::cout << "YES" << endl
                      << n / 2 << endl;

            for (long long int i = 1; i <= (n / 2) - 1; i += 2)
            {
                std::cout << i << " " << (x + 1) - i << " ";
            }
            std::cout << endl
                      << n / 2 << endl;
            for (long long int i = 1; i <= (n / 2) - 1; i += 2)
            {
                std::cout << i + 1 << " " << (x + 1) - (i + 1) << " ";
            }
        }
    }
    else
    {
        if (((n * (n + 1)) / 2) % 2 != 0)
        {
            std::cout << "NO" << endl;
        }
        else
        {
            set<long long int> st;
            set<long long int> stt;
            long long int x = (n * (n + 1)) / 2;
            x = x / 2;
            long long int sum = 0;

            for (long long int i = n; i >= 1; i--)
            {
                if (x >= i)
                {
                    x = x - i;
                    st.insert(i);
                    // break;
                }
                else
                {
                    // sum = sum - i;
                    // x = x + i;
                    stt.insert(i);
                }
            }
            // std::cout << "YES " << st.size() << " " << stt.size() << endl;
            std::cout << "YES";
            if (st.size() != 0)
            {
                std::cout << endl
                          << st.size() << endl;
                for (auto ii : st)
                {
                    std::cout << ii << " ";
                }
            }
            if (stt.size() != 0)
            {
                std::cout << endl
                          << stt.size() << endl;
                for (auto ii : stt)
                {
                    std::cout << ii << " ";
                }
            }
            std::cout << endl;
        }
    }
}