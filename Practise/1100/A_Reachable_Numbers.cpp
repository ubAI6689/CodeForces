#include <iostream>
#include <map>
typedef long long ll;
int main()
{
    ll n; 
    std::cin>>n;
    std::map<ll,int> res;
    res[n]++;
    while(true)
    {
        n+=1;
        if (n%10!=0)
        {
            // std::cout<<n<<' '<<res.size()<<'\n';
            res[n]++;
            if (res[n]>1)
                break;
        }
        else
        {
            while(n%10==0)
            {
                n=n/10;
            }
            // std::cout<<n<<' '<<res.size()<<'\n';
            res[n]++;
            if (res[n]>1)
                break;
        }
    }
    std::cout<<res.size();
    return 0;
}