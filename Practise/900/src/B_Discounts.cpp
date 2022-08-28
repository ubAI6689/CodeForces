//https://codeforces.com/problemset/problem/1132/B
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int solve()
{
    ll n; std::cin >> n;
    std::vector<ll> price(n);
    ll sum = 0;
    for (auto &it : price) 
    {
        std::cin >> it;
        sum += it;
    }
    std::sort(price.begin(), price.end(), std::greater<ll>()); // sort decreasingly
    
    int num; std::cin >> num;
    std::vector<int> coupons(num);
    for (auto &it : coupons) std::cin >> it;

    for (int i = 0; i < num; i++)
    {   
        ll discount = price[coupons[i] - 1];
        std::cout << sum - discount << std::endl;
    }
    return 0;
}

int main()
{
    solve();
    return 0;
}