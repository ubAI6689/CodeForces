#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        long long n;
        std::cin >> n;

        // print n/2 round up
        std::cout << (n + 1) / 2 << std::endl;
    }
    return 0;
}