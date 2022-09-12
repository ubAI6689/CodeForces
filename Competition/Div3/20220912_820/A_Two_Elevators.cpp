#include <iostream>
int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        long long a, b, c;
        std::cin>>a>>b>>c;
        if (a==1) {std::cout<<1<<std::endl; continue;}
        
        a--;
        if (c>b) b++;
        else if (c<b) b--;

        if (abs(a-1) > abs(b-c)+(c-1)) std::cout<<2<<std::endl; 
        else if (abs(a-1) < abs(b-c)+(c-1)) std::cout<<1<<std::endl;
        else std::cout<<3<<std::endl;
    }
    return 0;
}