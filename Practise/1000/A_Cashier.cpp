#include <iostream>
typedef long long ll;
int main()
{
    ll n,L,a;
    std::cin>>n>>L>>a;
    ll cnt=0;
    ll start_time=0, gap=0;
    for (int i=0; i<n; i++)
    {
        ll t_i, l_i;
        std::cin>>t_i>>l_i;
        gap=t_i-start_time;
        if (gap>=a) cnt+=gap/a;
        start_time=t_i+l_i;
    }
    if (start_time<L) cnt+=(L-start_time)/a;
    std::cout<<cnt;
    return 0;
}