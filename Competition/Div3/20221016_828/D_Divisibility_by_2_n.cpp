#include <iostream>
#include <cmath>
typedef long long ll;
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n; std::cin>>n;
        ll div=std::pow(2,n);
        ll array[n];
        ll product=1;
        int cnt=0;
        for (int i=0; i<n; i++)
        {
            ll x; std::cin>>x;
            array[i]=x;
            product*=x;
        }
        if (product%div==0)
            std::cout<<cnt<<'\n';
        else
        {
            for (int i=2; i<n; i+=2)
            {
                if (product*i%div==0)
                {
                    cnt++;
                    std::cout<<cnt<<'\n';
                }
            }
        }

    }
    return 0;
}