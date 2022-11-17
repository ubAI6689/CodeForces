// https://codeforces.com/problemset/problem/938/B
// 


#include <bits/stdc++.h>
typedef long long ll;
int main()
{   
    int n; std::cin >> n; // number of gifts
    
    int t, ans = 0;
    for (int i=0; i<n; i++)
    {
        std::cin>>t;
        ans = std::max(ans, std::min(t-1, 1000000-t)); 
    }
    std::cout<<ans;
    return 0;
}