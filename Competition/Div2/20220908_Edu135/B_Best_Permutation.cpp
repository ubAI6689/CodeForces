#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if (n%2==0)
        {
            for (int i=n-2; i>=1; i--)
            {
                cout<<i<<' ';
            }
            cout<<n-1<<' '<<n;
        }
        else if (n==5) for (int i=1;i<=n;i++) cout<<i<<' ';
        else
        {
            cout<<1<<' '<<2<<' '<<3<<' ';
            for (int i=n-2; i>=4; i--)
            {
                cout<<i<<' ';
            }
            cout<<n-1<<' '<<n;
        }
        cout<<'\n';
    }
    return 0;
}

// 4: 2 1 3 4 --> 7
// 5: 1 2 3 4 5 --> 9
// 6: 4 5 1 2 3 6 --> 11
// 7: 5 4 3 2 1 6 7 --> 5 0 3 0 1 6 13
// 8: 1 2 3 4 5 6 7 8 --> 1 2 0 4 5 0 15
// 9: 1 2 3 5 4 7 6 8 9 --> 