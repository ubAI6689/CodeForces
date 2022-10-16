#include <iostream>
typedef long long ll;
int main()
{
    ll m,n;
    std::cin>>m>>n;
    if (n<m)
        std::cout<<(n-1)/2<<'\n';
    else if (n==m)
        n < 3 ? std::cout<<0<<'\n' : n%2==0 ? std::cout<<n/2-1 : std::cout<<n/2;
    else
        n-m>m ? std::cout<<0<<'\n' : std::cout<<((m-(n-m))+1)/2<<'\n';
    return 0;
}