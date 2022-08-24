// https://codeforces.com/problemset/problem/1106/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

void solve(int n)
{
    vector<ll> num(n);
    for (auto &it : num) cin >> it;
    sort(num.begin(), num.end());

    ll sum = 0;
    for (int i = 0; i < num.size()/2; i++)
    {
        sum += pow(num[i] + num[n - 1 - i], 2);
    }
    cout << sum;
}

int main()
{
    int n;  cin >> n;
    solve(n);
    return 0;
}