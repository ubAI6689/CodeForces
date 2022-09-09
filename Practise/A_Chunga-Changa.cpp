#include <iostream>
#include <algorithm>
typedef long long ll;
int main()
{
    ll x,y,z;
    std::cin>>x>>y>>z;
    if (x+y<z) {std::cout<<0<<' '<<0; return 0;}
    if (x%z==0||y%z==0) {std::cout<<x/z+y/z<<' '<<0; return 0;}

    ll res = std::min(z-x%z, z-y%z);
    ll initial_coconut=x/z+y/z;
    if (x%z>y%z)
    {
        x+=res;
        y-=res;
    }
    else
    {
        x-=res;
        y+=res;
    }
    if (x/z+y/z <= initial_coconut) 
        std::cout<<x/z+y/z<<' '<<0;
    else std::cout<<x/z+y/z<<' '<<res;
    return 0;
}