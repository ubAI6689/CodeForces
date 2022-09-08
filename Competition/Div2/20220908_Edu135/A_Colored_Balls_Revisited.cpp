#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int largest=0;
        int index=0;
        int n; cin>>n;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            if (x>largest) {largest=x; index=i;}
        }
        cout<<index+1<<endl;
    }
    return 0;
}