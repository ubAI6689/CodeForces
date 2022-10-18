#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
int T,n;
int main()
{
    for(std::cin>>T;T--;)
    {
        int cnt[3]={0};
        std::cin>>n;
        for (int i=0; i<n; i++)
        {
            int x;
            std::cin>>x;
            ++cnt[x%3];
        }
        int res=cnt[0];
        int mn=std::min(cnt[1],cnt[2]);
        res+=mn;
        cnt[1]-=mn;cnt[2]-=mn;
        res+=(cnt[1]+cnt[2])/3;
        std::cout<<res<<'\n';
    }
    return 0;
}