/*
Calculating_Function

URL: https://codeforces.com/problemset/problem/486/A
Question: For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.
*/
#include <iostream>
typedef long long ll;
using namespace std;

int calculate(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {   
        if (i%2 == 0) ans += i;
        else ans -= i;
    }
    return ans;
}

int main()
{
    ll n = 0;
    cin >> n;
    ll ans = 0;
    
    if (n % 2 == 0) cout << n / 2 << endl;
    else cout << - (n+1) /2 << endl;
    return 0;
}
