// https://codeforces.com/problemset/problem/492/A
#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int i = 0; int step = 0;
    while(i <= n)
    {
        step++;
        i += step;
        if (i > n) step--;
        n -= i;
        // cout << i << endl;
    }
    cout << step << endl;
    return 0;
}

// i = 1, S = 1                            = 1  
// i = 2, S = 1 + 2                        = 3,  d = 2
// i = 3, S = 1 + 2 + 3                    = 6,  d = 3
//                                         = 10, d = 4
//                                         = 15, d = 5       
// i = n, S = 1 + 2 + 3 + ... + (n-1) + n  = 

// S = (n-n) + (n-n+1) + (n-n+2) + ... + (n-3) + (n-2) + (n-1) + n  
// 