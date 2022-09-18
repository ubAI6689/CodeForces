#include <iostream>
#include <set>
typedef long long ll;
int main()
{
    int n,k;
    std::cin>>n>>k;
    std::set<ll> v;
    for (int i=0; i<n; i++)
    {
        ll x; std::cin>>x;
        v.insert(x);
    }

    if (k<=v.size())
    {
        ll sum=0; 
        int cnt=0;
        for (auto it=v.begin(); it!=v.end(); it++)
        {   
            if (cnt==k) break;
            std::cout<<*it-sum<<'\n';
            sum+=*it-sum;
            cnt++;
        }
    }
    else
    {   
        ll sum=0;
        int balance=k-v.size();
        for (auto it=v.begin(); it!=v.end(); it++)
        {   
            std::cout<<*it-sum<<'\n';
            sum+=*it-sum;
        }

        for (int i=0; i<balance; i++)
            std::cout<<0<<'\n';
    }
    // sort(v.begin(), v.end());
    // for (int i=0; i<k; i++)
    // {   
    //     std::cout<<v[0]<<'\n';
    //     ll temp=v[0];
    //     for (int j=0; j<v.size(); j++)
    //     {    
    //         v[j]=v[j]-temp;
    //         if (v[j]==0)
    //         {
    //             v.erase(v.begin());
    //             j=-1;
    //             continue;
    //         }
    //     }
    // }
    return 0;
}