#include <iostream>
typedef long long ll;
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        ll n,q;
        std::cin>>n>>q;
        ll array[n];
        for (int i=0; i<n; i++)
        {
            ll x; std::cin>>x;
            array[i]=x;
        }

        for (int i=0; i<q; i++)
        {   
            ll sum=0;
            ll type, addition;
            std::cin>>type>>addition;
            if (type==0)
            {
                for (int j=0; j<n; j++)
                {
                    if (array[j]%2==0)
                    {
                        array[j]+=addition;
                        sum+=array[j];
                    }
                    else
                        sum+=array[j];
                }
            }
            else
            {
                for (int j=0; j<n; j++)
                {
                    if (array[j]%2!=0)
                    {
                        array[j]+=addition;
                        sum+=array[j];
                    }
                    else
                        sum+=array[j];
                }
            }
            std::cout<<sum<<'\n';
        }
    }
    return 0;
}