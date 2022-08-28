//https://codeforces.com/problemset/problem/1004/A
#include <iostream>
typedef long long ll;
int main()
{
    ll n, d; std::cin >> n >> d;
    ll array[n];
    for (int i = 0, x; i < n && std::cin >> x; i++) array[i] = x;

    ll count = 1; // first hotel - d
    for (int i = 0; i < n; i++)
    {
        if (i == n-1) {count++;break;} // last hotel + d
        if (array[i+1]-array[i]==2*d) count++;
        else if (array[i+1]-array[i]>2*d) count+=2;
    }
    std::cout<<count;
    return 0;
}
