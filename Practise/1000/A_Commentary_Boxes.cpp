#include <iostream>
#include <algorithm>
typedef long long ll;
int main()
{
    ll n,m,a,b;
    std::cin>>n>>m>>a>>b;
    if (n%m==0)
        std::cout<<0;
    else 
        n<m ? std::cout<<std::min(n*b, (m-n)*a) : std::cout<<std::min((n%m)*b, (m-n%m)*a);
    return 0;
}