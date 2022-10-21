#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        map<ll,ll> mpp;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            mpp[arr[i]]++;
        }
        ll z=mpp[1];
        ll ans=z,s=z;
        for(ll i=2;i<=z;i++)
        {
            s+=mpp[i];
            ll y=s-(i-1);
            z=y;
            ans=min(ans,y);
        }
        cout<<ans<<'\n';
    }
}