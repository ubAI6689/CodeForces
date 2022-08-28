//https://codeforces.com/problemset/problem/1025/A
#include <iostream>
#include <string>
#include <set>

void solve(int n, std::string color)
{
    std::set<char> letter;
    for (int i = 0; i < n; i++) letter.insert(color[i]);
    if (letter.size() == n && n > 1) std::cout<<"No\n";
    else std::cout<<"Yes\n";
}

int main()
{
    int n; std::cin >> n;
    std::string color; std::cin >> color;
    solve(n, color);
    return 0;
}