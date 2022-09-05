#include <iostream>
#include <cmath>

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

int main()
{
    int n; std::cin>>n;
    int temp = -10000000;
    for (int i = 0,x; i<n && std::cin>>x; i++)
    {
        if (!isPerfectSquare(x))
            if (temp<x)
                temp=x;
    }
    std::cout<<temp;
    return 0;
}