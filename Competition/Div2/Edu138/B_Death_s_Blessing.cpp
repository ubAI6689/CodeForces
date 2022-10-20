#include <iostream>
#include <vector>
#include <numeric>      // iota
#include <algorithm>    // sort, stable_sort

using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n; cin>>n;
        vector<ll> health(n), magic(n);
        for (int i=0; i<n; i++)
        {
            ll x; cin>>x;
            health[i]=x;
        }
        for (int i=0; i<n; i++)
        {
            ll x; cin>>x;
            magic[i]=x;
        }

        sort(magic.begin(), magic.end());
        ll ans=0;
        for (auto it:health)
            ans+=it;
        for (int i=0; i<magic.size()-1;i++)
            ans+=magic[i];
        
        cout<<ans<<'\n';
    }
    return 0;
}

