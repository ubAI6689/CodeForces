#include <iostream>
#include <cmath>
typedef long long ll;
int main()
{
    // m mod 2^n
    ll n, m;
    std::cin>>n>>m;
    ll res = pow(2,n);
    std::cout<<m%res;
    return 0;
}