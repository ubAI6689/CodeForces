#include <iostream>
#include <map>
typedef long long ll;

ll N,M;
std::map<ll, ll> res;

int main()
{
    std::cin>>N;
    for (int i=0; i<N; i++)
    {
        ll index;
        std::cin>>index;
        std::cin>>res[index];
    }

    std::cin>>M;
    for (int i=0; i<M; i++)
    {
        ll index;
        std::cin>>index;
        ll temp; std::cin>>temp;
        if (res.count(index)>0)
        {
            if (res[index]<temp)
                res[index]=temp;
        }
        else
            res[index]=temp;
    }

    ll sum=0;
    std::map<ll,ll>::iterator it;
    for (it=res.begin(); it!=res.end();it++)
    {
        sum+=it->second;
    }
    std::cout<<sum;
    return 0;
}
