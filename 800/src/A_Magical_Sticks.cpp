// https://codeforces.com/problemset/problem/1371/A

#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {   
        ll stick; cin >> stick;
        cout << ((stick - 1)/2) + 1 << endl;
    }
    return 0;
}