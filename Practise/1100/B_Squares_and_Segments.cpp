#include<bits/stdc++.h>
using namespace std;
 
int n;
 
int main()
{
    cin >> n;
    int s = sqrt(n);
    if ((s * s) == n) 
        cout << 2 * s;
    else if (s * (s + 1) >= n) 
        cout << s - 1 + s + 2;
    else 
        cout << 2 * s + 2;
}