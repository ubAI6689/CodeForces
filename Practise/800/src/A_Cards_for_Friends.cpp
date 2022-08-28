// https://codeforces.com/problemset/problem/1472/A
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int w, h;
        ll n;
        cin >> w >> h >> n;

        ll card = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            card *= 2;
        }

        while (h % 2 == 0) 
        {
            h /= 2;
            card *= 2;
        }

        if (card >= n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}