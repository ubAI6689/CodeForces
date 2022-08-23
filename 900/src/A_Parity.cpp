//https://codeforces.com/problemset/problem/1110/A
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int b, k;
    cin >> b >> k;

    int x; int odd = 0;
    for (int i = 1; i <= k; i++)
    {
        cin >> x;
        if (i == k) {if (x % 2 != 0) odd++;}
        else {if (x * b % 2 != 0) odd++;}
    }
    cout << (odd % 2 == 0 ? "even\n" : "odd\n");
    return 0;
} 
