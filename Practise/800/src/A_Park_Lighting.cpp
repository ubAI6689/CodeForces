// https://codeforces.com/problemset/problem/1358/A
#include <iostream>

void solve()
{
    int m, n;
    std::cin >> m >> n;
    if (m*n % 2 != 0) std::cout << m*n/2 + 1 << std::endl;
    else std::cout << m*n/2 << std::endl;
}


int main()
{
    int t; std::cin >> t;
    while(t--) solve();
    return 0;
}