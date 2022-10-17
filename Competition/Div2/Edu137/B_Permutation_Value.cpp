#include <iostream>
int main()
{
    int T; std::cin>>T;
    while (T--)
    {
        int n; std::cin>>n;
        for (int i=1;i<=n;i++)
        {
            if (i==1)
                std::cout<<1<<" ";
            else if (i==2)
                std::cout<<n<<" ";
            else
                std::cout<<i-1<<" ";
        }
        std::cout<<'\n';
    }
    return 0;
}