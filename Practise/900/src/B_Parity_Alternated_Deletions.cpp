// https://codeforces.com/problemset/problem/1144/B
#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;


int main()
{
    int n; std::cin >> n;
    ll x;
    int sum = 0;
    std::vector<ll> odd; std::vector<ll> even;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }
    std::sort(even.begin(), even.end());
    std::sort(odd.begin(), odd.end());

    if (even.size() == 0)
    {
        for (int i = 0; i < odd.size() - 1; i++) sum += odd[i];
        std::cout << sum << std::endl;
        return 0;
    }
    else if (odd.size() == 0)
    {
        for (int i = 0; i < even.size() - 1; i++) sum += even[i];
        std::cout << sum << std::endl;
        return 0;
    }

    int diff = abs(even.size() - odd.size());

    if (diff <= 1 ) std::cout << 0 << std::endl;
    else if (diff > 1)
    {
        if (even.size() > odd.size())
        {
            for (int i = 0; i < diff - 1; i++) sum += even[i];
            std::cout << sum << std::endl;
        }
        else
        {
            for (int i = 0; i < diff - 1; i++) sum += odd[i];   
            std::cout << sum << std::endl;
        }
    }

    return 0;
}