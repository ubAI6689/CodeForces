#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
int main()
{
    ll N, D;
    std::cin>>N>>D;

    std::vector<ll> player;
    for (int i = 0, x; i < N && std::cin>>x; i++) player.push_back(x);
    sort(player.begin(), player.end(), std::greater<ll>());

    int count = 0;
    ll power = 0;
    int t = player.size();
    int i = 0;
    while(t > 0)
    {
        power += player[i];
        t--;
        if (power > D)
        {
            count++;
            power = 0;
            t-2;
            i++;
        }
    }
    
    std::cout<<count;
    return 0;
}