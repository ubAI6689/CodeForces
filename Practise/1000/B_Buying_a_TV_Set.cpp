#include <iostream>
#include <algorithm>

// long long findGCD(long long x, long long y)
// {
//     while(x!=y)
//     {
//         if (x>y)
//             x-=y;
//         else
//             y-=x;
//     }
//     return x;
// }

int main()
{
    long long a,b,x,y;
    std::cin>>a>>b>>x>>y;
    
    long long g = std::__gcd(x,y);
    x/=g;y/=g;
    std::cout<<std::min(a/x,b/y);
    return 0;
}