// https://codeforces.com/problemset/problem/1520/B
#include <iostream>
typedef long long ll;

void solve(ll n)
{   
    int res = 0;
    for (ll pw = 1; pw <= n; pw = pw * 10 + 1){
        for (int d = 1; d <= 9; d++){
            if (pw * d <= n){
                res++;
            }
        }
    }
    std::cout << res << std::endl;
}

int main()
{
    int t; std::cin >> t;
    while(t--)
    {
        ll n; std::cin >> n;
        solve(n);
    }
    return 0;
}