// https://codeforces.com/problemset/problem/1016/A
#include <iostream>
typedef long long ll;

void solve(ll n, ll m)
{
    ll res = 0;
    while(n--)
    {
        ll a; std::cin>>a;
        std::cout<<(res+a)/m<<' '; 
        res=(res+a)%m; // balance carry forward
    }
}

int main()
{   
    ll n, m; std::cin >> n >> m;    
    solve(n, m);
    return 0;
}