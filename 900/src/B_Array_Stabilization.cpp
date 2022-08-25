// https://codeforces.com/problemset/problem/1095/B
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n; cin >> n;
    int array[n];
    for (int i = 0, x; i < n && cin >> x; i++) array[i] = x;
    sort(array, array+n);
    cout<<(array[n-1]-array[1]<array[n-2]-array[0] ? array[n-1]-array[1] : array[n-2]-array[0]);
    return 0;
}