// https://codeforces.com/problemset/problem/80/A
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n == 1) return false;

    for (int i = 2; i <= n/2; ++i)
    {
        if (n % i == 0) return false;
    }

    return true;
}

void solve(int n, int m)
{
    for (int i = n+1; i <= m; i++)
    {
        if (!isPrime(m)) {cout << "NO\n"; break;}
        
        if (isPrime(i))
        {
            if (i == m) cout << "YES\n";
            else {cout << "NO\n";break;}
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    solve(n, m);
    return 0;
}