// https://codeforces.com/problemset/problem/1348/A
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<ll> num(n);
        ll two_power = 1;
        for (auto &it : num)
        {
            two_power = two_power*2;
            // cout << two_power << endl;
            it = two_power;
        }

        ll sum_a = num[n-1]; ll sum_b = num[n-2];
        for (int i = 0; i < (n/2 - 1); i++)
        {
            sum_a += num[i];
            sum_b += num[i + n/2 - 1];
        }
        cout << sum_a - sum_b << endl;
    }
}