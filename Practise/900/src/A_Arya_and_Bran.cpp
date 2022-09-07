// https://codeforces.com/problemset/problem/839/A
#include <iostream>
int main()
{
    int n,k;
    std::cin>>n>>k;

    int temp = 0;
    for (int i = 1; i <= n; i++)
    {   
        int x; std::cin>>x;
        temp+=x;
        if (temp <= 8) {k-=temp; temp-=temp;}
        else {k-= 8; temp-=8;}
        if (k <= 0) {std::cout<<i; return 0;}
    }
    std::cout<< -1;
    return 0;
}