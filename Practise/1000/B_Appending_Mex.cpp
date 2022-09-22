#include <iostream>

typedef long long ll;
int main()
{   
    int n; std::cin>>n;
    ll num=0;
    for (int i=1; i<=n; i++)
    {
        ll x;
        std::cin>>x;
        if ((i==1 && x!=0) || x-num>1)
        {
            std::cout<< i;
            return 0;
        }

        if (num<x)
            num=x;
    }
    std::cout<< -1;
    return 0;
}