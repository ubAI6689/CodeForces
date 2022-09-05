#include <iostream>
typedef long long ll;
int main()
{
    ll n,m;
    std::cin>>n>>m;
    if (m==1) std::cout<<n-1;
    else std::cout<<(m-1)*n;
    return 0;
}