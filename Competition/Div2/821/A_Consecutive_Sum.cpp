#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n, k; 
        std::cin>>n>>k;
        ll array[n];
        std::vector<ll> v;
        for (int i=0; i<n; i++)
        {
            ll x;
            std::cin>>x;
            array[i]=x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), std::greater<ll>());
        

        
    }
    return 0;
}