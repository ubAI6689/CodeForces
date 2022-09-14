#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
int main()
{
    ll n,m,k; std::cin>>n>>m>>k;
    std::vector<ll> emote;
    for (int i=0,x; i<n&&std::cin>>x; i++) emote.push_back(x);
    sort(emote.begin(), emote.end(), std::greater<ll>());
    // for (auto it: emote) std::cout<<it<<" ";
    
    std::cout<<m/(k+1)*1ll*(emote[0]*1ll*k+emote[1])+m%(k+1)*1ll*emote[0]<<std::endl;
    // std::cout<<sum;
    return 0;
}