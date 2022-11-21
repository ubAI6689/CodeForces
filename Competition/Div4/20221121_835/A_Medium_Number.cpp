#include <bits/stdc++.h>

int main()
{
    int T; std::cin >> T;
    while (T--)
    {
        std::vector<int> v(3);
        std::cin >> v[0] >> v[1] >> v[2];
        std::sort(v.begin(), v.end());
        std::cout << v[1] << std::endl;
    }
    return 0;
}