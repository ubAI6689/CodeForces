#include <bits/stdc++.h>

int main()
{
    int T; std::cin >> T;
    while (T--)
    {
        int n; std::cin >> n;
        std::string s; std::cin >> s;

        // sort the string
        std::sort(s.begin(), s.end());

        // return the biggest character, a = 1, b = 2, c = 3, ...
        std::cout << s.back() - 'a' + 1 << std::endl;
    }
    return 0;
}