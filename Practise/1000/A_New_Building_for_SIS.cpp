#include <iostream>
#include <algorithm>
typedef long long ll;
int main()
{
    ll n,h,a,b,k;
    std::cin>>n>>h>>a>>b>>k;
    while(k--)
    {
        ll t_a, f_a, t_b, f_b;
        std::cin>>t_a>>f_a>>t_b>>f_b;
        ll time_between_tower=abs(t_b-t_a);
        ll time_between_floor=0;
        if (time_between_tower==0)
            time_between_floor=abs(f_a-f_b);
        else
            time_between_floor=std::min(abs(f_a-a)+abs(f_b-a),abs(f_a-b)+abs(f_b-b));
        std::cout<<time_between_tower+time_between_floor<<'\n';
    }
    return 0;
}