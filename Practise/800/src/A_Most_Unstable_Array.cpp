//https://codeforces.com/problemset/problem/1353/A
#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1) cout << 0 << endl;
        else cout << (std::min(2, n - 1))*m << endl;
    }
    return 0;
}