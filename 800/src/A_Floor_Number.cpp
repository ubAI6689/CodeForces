//https://codeforces.com/problemset/problem/1426/A
#include <iostream>

void solve()
{   
    int n, x;
    std::cin >> n >> x;
    int floor = 1;
    if (n <= 2) std::cout << floor << std::endl;
    else 
    {
        int house = 3;
        while(house <= n)
        {
            floor++; 
            // std::cout << "floor is: " << floor << std::endl;
            house += x;
            // std::cout << "house is: " << house << std::endl;
        }
        std::cout << floor << std::endl;
    }
    // first floor : 1 2
    // second floor : 3,   x + 2   (3, 4, 5)
    // third floor : x+3, 2.x + 2  (6, 7, 8)
}

int main()
{
    int t; std::cin>>t;
    while(t--) 
    {
        solve();
    }
    return 0;
}