// https://codeforces.com/problemset/problem/1294/A
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;

        if (a >  b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        if (b > c)
        {
            int temp = b;
            b = c;
            c = temp;
        }

        if (a >  b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        int diff_sum = (c - b) + (c - a);

        if ((n - diff_sum >= 0) && (n - diff_sum) % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
