// https://codeforces.com/problemset/problem/935/A
#include <iostream>

void solve(int t)
{
    int count = 0;
    for (int i = 1; i < t; i++){
        if (t%i == 0) count++;
    }
    std::cout << count << std::endl;
}

int main()
{
    int t; std::cin >> t;
    solve(t);
    return 0;
}