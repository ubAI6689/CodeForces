// https://codeforces.com/problemset/problem/1551/A
#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll price; cin >> price;
        ll unit = price / 3;
        
        ll balance = price - (unit + unit*2);
             if (balance == 0) cout << unit << ' ' << unit << endl;
        else if (balance == 1) cout << unit + 1 << ' ' << unit << endl;
        else if (balance == 2) cout << unit << ' ' << unit + 1 << endl;
    }
    return 0;
}