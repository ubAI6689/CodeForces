#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main()
{
    int n; std::cin>>n;
    ll volume=0;
    for (int i = 0; i < n; i++)
    {
        ll x; std::cin>>x;
        volume+=x;
    }

    std::vector<ll> can;
    for (int i = 0; i < n; i++)
    {
        ll x; std::cin>>x;
        can.push_back(x);
    }
    sort(can.begin(),can.end(),std::greater<ll>());

    (volume <= can[0]+can[1]) ? std::cout<<"YES\n":std::cout<<"NO\n";
    return 0;
}