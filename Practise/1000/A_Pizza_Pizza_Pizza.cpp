#include <iostream>
int main()
{
    long long n; std::cin>>n;
    if (n==0) {std::cout<<0; return 0;}
    (n+1)%2==0?std::cout<<(n+1)/2:std::cout<<n+1;
    return 0;
}