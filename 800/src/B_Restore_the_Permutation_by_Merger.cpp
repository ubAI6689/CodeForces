// https://codeforces.com/problemset/problem/1385/B
#include <iostream>

void solve()
{
    int n; std::cin >> n;
    int array[2*n] = {};
    for (int i = 0, x; i < n*2 && std::cin >> x; i++) 
    {   
        if (array[x] == 0) // check for repeated numbers
        {
            std::cout << x << ' ';
            array[x]++;
        }
    }
    // for (auto it : permutation) std::cout << it << ' ';
    std::cout << '\n';
}

int main()
{
    int t; std::cin >> t;
    while(t--) solve();
    return 0;
}