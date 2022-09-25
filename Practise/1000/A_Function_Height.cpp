// https://codeforces.com/problemset/problem/1036/A
#include <iostream>
typedef long long ll;
int main()
{
    ll n,k;
    std::cin>>n>>k;
    
    // area of triangle is 1/2*base*height but since base == 2, 
    // so the area is always == height.
    if (k<=n) std::cout<< 1;
    else std::cout<<(k%n==0? k/n : k/n+1);  
    return 0;
}