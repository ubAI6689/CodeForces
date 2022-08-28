// https://codeforces.com/problemset/problem/1047/B
#include <iostream>
typedef long long ll;

void solve()
{
    int n; std::cin >> n;
    ll sum = 0; 
    while(n--)
    {
        ll x, y;
        std::cin >> x >> y;
        if (x+y>sum) sum=x+y;
    }
    std::cout<<sum<<std::endl;
}

int main()
{
    solve();
    return 0;
}