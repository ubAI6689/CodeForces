#include <iostream>
#include <vector>
#include <algorithm>    // sort, stable_sort

using namespace std;
typedef long long ll;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        ll ans=0;
        int n; cin>>n;
        vector<ll> magic(n);
        for (int i=0; i<n; i++)
        {
            ll x; cin>>x;
            ans+=x;
        }
        for (int i=0; i<n; i++)
        {
            ll x; cin>>x;
            magic[i]=x;
        }

        sort(magic.begin(), magic.end());
        for (int i=0; i<magic.size()-1;i++)
            ans+=magic[i];
        
        cout<<ans<<'\n';
    }
    return 0;
}

