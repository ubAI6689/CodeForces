// https://codeforces.com/problemset/problem/1055/A
#include <iostream>

void solve()
{
    int n,s;
    std::cin>>n>>s;
    int track_1[n]; int track_2[n];
    for (int i = 0,x; i<n && std::cin>>x; i++)
        track_1[i] = x;
    for (int i = 0,x; i<n && std::cin>>x; i++)
        track_2[i] = x;
    
    if (track_1[0]==0) {std::cout<<"NO\n"; return;}
    else if (track_1[s-1]==0 && track_2[s-1]==0) {std::cout<<"NO\n"; return;}
    else if (track_1[s-1]==0)
    {
        for (int i=s; i<n; i++)
        {   
            if (track_1[i] == 1 && track_2[i] == 1) {std::cout<<"YES\n"; return;}
            if (i == n-1 && (track_1[n-1]==0 || track_2[n-1]==0)) {std::cout<<"NO\n"; return;}
        }
    }
    std::cout<<"YES\n";
}

int main()
{
    solve();
    return 0;
}