#include <iostream>
typedef long long ll;
int main()
{
    ll n,m;
    std::cin>>n>>m;
    if (m%n!=0) {std::cout<< -1; return 0;}
    int d = m/n;
    int cnt=0;
    while(d>1)
    {
        if (d%3==0) d=d/3;
        else if (d%2==0) d=d/2;
        else {std::cout<< -1; return 0;}
        cnt++;
    }
    std::cout<<cnt;
    return 0;
}