#include <iostream>
typedef long long ll;

void solve(ll l, ll r, ll d)
{
    if (l>d) {std::cout<<d<<'\n'; return;}
    
    ll q1 = r/d;
    ll n1 = d*q1;

    if (n1>r) std::cout<<n1<<'\n';
    else std::cout<<d*(q1+1)<<'\n';
}

int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        ll l, r, d;
        std::cin>>l>>r>>d;
        solve(l,r,d);
    }
    return 0;
}
