// https://codeforces.com/problemset/problem/884/B
#include <bits/stdc++.h>
typedef long long ll;
int main()
{
    ll n, x;
    std::cin >> n >> x;
    ll ans=0;
    for(ll i = 0; i < n; i++)
    {
        ll a;
        std::cin >> a;
        ans+=a;
    }
    std::cout<<((ans+n-1)==x?"YES":"NO")<<std::endl;
    return 0;
}