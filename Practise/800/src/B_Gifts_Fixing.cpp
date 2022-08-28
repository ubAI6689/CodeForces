// https://codeforces.com/problemset/problem/1399/B
#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <cstdlib>   // abs
typedef long long ll;
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<ll> candy(n); vector<ll> orange(n);
        for (auto &it : candy ) cin >> it;
        for (auto &it : orange) cin >> it;

        int min_candy  = *min_element(candy.begin(), candy.end());
        int min_orange = *min_element(orange.begin(), orange.end());

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += max(candy[i] - min_candy, orange[i] - min_orange);
        }
        cout << ans << endl;
    }
    return 0;
}