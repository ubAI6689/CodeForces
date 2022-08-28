// https://codeforces.com/problemset/problem/1107/A
#include <iostream>
#include <string>

void split(std::string s, int len)
{
    if (len == 1 || (len == 2 && s[0] >= s[1]))
    {
        std::cout << "NO\n";
        return;
    }

    std::cout<<"YES\n2\n" << s[0] << ' ' << s.substr(1) << std::endl;
}

int main()
{
    int n; std::cin >> n;
    while(n--)
    {
        int len;       std::cin >> len;
        std::string s; std::cin >> s;
        split(s, len);
    }
    return 0;
}