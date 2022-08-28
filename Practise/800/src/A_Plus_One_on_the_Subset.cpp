// https://codeforces.com/problemset/problem/1624/A

#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<ll> num;
        for (int i = 0, x; i < n && cin >> x; i++) num.push_back(x);
        sort(num.begin(), num.end());
        cout << num[n-1] -  num[0] << endl;
    }
    return 0;
}