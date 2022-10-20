#include <iostream>
int main()
{
    int n; std::cin>>n;
    std::cout<<n/2+1;
    for (int i=1;i<=n/2+1;++i)
        std::cout<<"\n"<<i<<" "<<"1";
    for (int i=2;i<=n-(n/2+1)+1;++i)
        std::cout<<"\n"<<n/2+1<<" "<<i;
    return 0;
}