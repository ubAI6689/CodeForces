#include <iostream>
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n,m;
        std::cin>>n>>m;
        if (n==1 || m==1)
        {
            std::cout<<n<<' '<<m<<'\n';
            continue;
        }
        else if (n>3&&m>3)
        {
            std::cout<<n<<' '<<m<<'\n';
            continue;
        }
        else
        {
            std::cout<<2<<' '<<2<<'\n';
            continue;
        }
        
    }
    return 0;
}