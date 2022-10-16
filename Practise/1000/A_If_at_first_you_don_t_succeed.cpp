#include <iostream>
int main()
{
    int A,B,C,N;
    std::cin>>A>>B>>C>>N;
    if ((A-C+B-C+C>=N) || (A<C) || (B<C))
        std::cout<< -1;
    else
        std::cout<<N-(A-C)-(B-C)-C;
    return 0;
}