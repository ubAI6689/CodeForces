// https://codeforces.com/problemset/problem/898/B

#include <bits/stdc++.h>
int main()
{
    int n, a, b;
    std::cin >> n >> a >> b;

    // This solution is based on the fact that the number of
    // a and b can be calculated as follows:
    //     n = i * a + j * b
    // where i is the number of a, and j is the number of b.
    // We can solve this by taking the difference between n and
    // all possible values for i*a. We then check if the difference
    // is divisible by b. If it is, then we have a solution.
    for (int i = n/a ; i >= 0 ; i--)
    {
        if ((n - i*a) % b == 0)
        {
            std::cout << "YES" << std::endl;
            std::cout << i << " " << (n - i*a)/b << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;
    return 0;
}
