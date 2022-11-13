// https://codeforces.com/problemset/problem/1066/A

// competitive programming template
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int L, v, l, r;
        cin >> L >> v >> l >> r;

        // total number of lanterns
        int total = L/v;

        // number of lanterns in the range
        int range = (r/v) - (l-1)/v;

        // number of lanterns outside the range
        int outside = total - range;

        cout << outside << endl;
    }
    return 0;
}