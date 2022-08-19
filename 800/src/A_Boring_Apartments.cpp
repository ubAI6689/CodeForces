// https://codeforces.com/problemset/problem/1433/A
#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        if (x > 1000) cout << ((x/1111) - 1)*10 + 10 << endl;
        else if (x > 100) cout << ((x/111) - 1)*10 + 6 << endl;
        else if (x > 10) cout << ((x/11) - 1)*10 + 3 << endl;
        else if (x < 10) cout << (x - 1)*10 + 1 << endl;
    }
    return 0;
}