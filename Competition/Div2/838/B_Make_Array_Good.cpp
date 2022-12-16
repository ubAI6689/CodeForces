#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll x)
{
    /* 1. Find the first power of 2 greater than or equal to x. */
    ll cur = 1;
    while (cur <= x)
        cur *= 2;

    /* 2. Return the particular power of 2. */
    return cur;
}

void solve()
{
    ll n; cin>>n;  // read the number of elements in the array
    cout<<n<<"\n"; // print the number of elements in the array
    for (ll i = 1; i <= n; i++) // iterate from 1 to n
    {
        ll x; cin>>x; // read each element of the array
        cout<<i<<" "<<f(x)-x<<"\n"; // print the index and the value of the difference between the input and the output of the function f
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while (t--)
        solve();
}