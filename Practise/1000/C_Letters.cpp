#include <iostream>
typedef long long ll;
int main()
{
    ll n,m;
    std::cin>>n>>m;
    ll dorm[n];
    ll cnt=0;
    for (int i=0; i<n; i++)
    {
        ll x;
        std::cin>>x;
        dorm[i]=x+cnt;
        cnt=dorm[i];
    }

    ll index=0;
    for (int i=0; i<m; i++)
    {
        ll x;
        std::cin>>x;
        while(true)
        {
            if (x<=dorm[index])
            {
                if (index==0)
                {
                    std::cout<<index+1<<" "<<x<<'\n';
                    break;
                }
                else
                {
                    std::cout<<index+1<<" "<<x-dorm[index-1]<<'\n';
                    break;
                }
            }
            else
            {
                index++;
            }
        }
    }
    return 0;
}