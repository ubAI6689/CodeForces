#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        
        ll price[n];
        for (int i=0, x; i<n && cin>>x; i++)
            price[i]=x;

        ll budget[n];
        for (int i=0, x; i<n && cin>>x; i++)
            budget[i]=x;

        vector<ll> positive;
        vector<ll> negative;
        ll spending;
        for (int i=0; i<n; i++)
        {   
            spending=budget[i]-price[i];
            if (budget[i]>price[i]) positive.push_back(spending);
            else negative.push_back(spending);
        }
        if (rich.size()==0) {std::cout<<0; continue;}
    }
    return 0;
}