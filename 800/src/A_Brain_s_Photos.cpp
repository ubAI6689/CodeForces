// https://codeforces.com/problemset/problem/707/A
#include <iostream>
using namespace std;


int main()
{
    int n, m;
    char x;
    cin >> n >> m;
    while(cin >> x)
    {   
        if (x != 'B' && x != 'W' && x != 'G')
        {
            cout << "#Color\n";
            return 0;
        }
    }
    cout << "#Black&White\n";
}