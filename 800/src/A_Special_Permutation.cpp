// https://codeforces.com/problemset/problem/1454/A
#include <iostream>
#include <vector>

void solve()
{
    int n; std::cin >> n;

    // std::vector<int> num(n);
    // for (auto &it : num) {it = n; n--;}
    // int index = 1;
    // for (auto it : num) 
    // {
    //     if (it == index) 
    //     {
    //         int temp = it;
    //         it = num[index];
    //         num[index] = temp;
    //     }
    //     std::cout << it << ' ';
    //     index++;
    // }

    for (int i = 1; i <= n; i++)
    {
        if (i == n) std::cout << 1;
        else std::cout << i+1 << ' ';
    }
}

int main()
{   
    int t; std::cin >> t;
    while(t--)
    {
        solve();
        std::cout << '\n'; 
    }
    return 0;
}

