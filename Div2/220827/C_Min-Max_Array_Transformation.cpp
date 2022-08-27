#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        int m = 2;
        vector<ll> a; vector<ll> b;
        for(int i=0,x;i<n&&cin>>x;i++)a.push_back(x);
        for(int i=0,x;i<n&&cin>>x;i++)b.push_back(x);

        // for(auto it:a)cout<<it<<' ';cout<<'\n';
        // for(auto it:b)cout<<it<<' ';cout<<'\n';
        for (int i=0; i < n; i++) cout<<b[i]-a[i]<<' ';
        cout<<'\n';
        
        int count=0;
        for(int i=0;i<n;i++) if(a[i]==b[i]) count++;
        if (count==n) 
        {
            for (int i=0; i < n; i++) cout<<b[i]-a[i]<<' ';
            cout<<'\n';
            continue;;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (b[i] > a[i+1] && b[i+1] > a[i])
            {
                swap(b[i],b[i+1]);
            }
        }

        for (int i=0; i < n; i++) cout<<b[i]-a[i]<<' ';
        cout<<'\n';
        
    }
    return 0;
}