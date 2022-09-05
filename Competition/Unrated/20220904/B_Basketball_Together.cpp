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

    ll power = 0;
    int count = 0;
    int i = 0;
    while(N > 0)
    {
        power += player[i];
        N--;
        if (power > D)
        {
            count++;
            power = 0;
            i++;
        }
    }
    std::cout<<count;
    return 0;
}