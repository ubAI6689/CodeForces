#include <iostream>
typedef long long ll;
int main()
{
    ll a,b,c,d;
    std::cin>>a>>b>>c>>d;
    if (a!=d)
        std::cout<<0;
    else if (c>0 && a==0)
        std::cout<<0;
    else
        std::cout<<1;
    return 0;
}