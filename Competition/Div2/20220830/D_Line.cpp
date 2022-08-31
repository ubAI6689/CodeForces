#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
typedef long long ll;

void solve()
{
    int n; std::cin>>n;
    std::string s; std::cin>> s;
    ll total = 0;
    std::vector<ll> v;
    for (int i=0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            v.push_back((n - 1 - i) - i);
            total += i;
        }
        else
        {
            v.push_back(i - (n - 1 - i));
            total += n - 1 - i;
        }
    }
    sort(v.begin(), v.end(), std::greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0) {total += v[i];}
        std::cout<< total << ' ';
    }
    std::cout<<'\n';
}

int main()
{
    int t; std::cin>>t;
    while(t--) solve();
    return 0;
}