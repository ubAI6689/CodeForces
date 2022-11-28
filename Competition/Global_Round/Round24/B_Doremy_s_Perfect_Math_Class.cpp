// https://codeforces.com/contest/1764/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        /// choose integer x and y from the array such that x>y and x-y is not present in the array.
        /// append x-y to the array and repeat the process until no such x and y can be found.
        /// print the length of the array after the process is complete.

        
    }
    return 0;
}