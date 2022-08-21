// https://codeforces.com/problemset/problem/1619/A
#include <iostream>
#include <string>

void solve()
{
    std::string str; std::cin >> str;
    if(str.length() % 2 != 0) std::cout << "NO\n";
    else 
    {
        std::string half_1 = str.substr(0, str.length()/2);
        std::string half_2 = str.substr(str.length()/2);
        half_1 == half_2 ? std::cout << "YES\n" : std::cout << "NO\n";
    }
}

int main()
{
    int t; std::cin >> t;
    while(t--) solve();
    return 0;
}