#include <iostream>
int n, s, d, t;
int main()
{
    for (std::cin>>n;n--;)
    {
        std::cin>>s>>d;
        while(s<=t)
        {
            s=s+d;
        }
        t=s;
    }
    std::cout<<s<<std::endl;
    return 0;
}
