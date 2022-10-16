#include <iostream>
#include <algorithm>
int main()
{
    int n; std::cin>>n;
    int h,w;
    std::cin>>h>>w;
    int height=std::max(h,w);
    for (int i=0; i<n-1; i++)
    {
        int nh, nw;
        std::cin>>nh>>nw;
        if (nh>height && nw>height)
        {
            std::cout<<"NO\n";
            return 0;
        }
        if (nh>height && nw<height)
            height=nw;
        else if (nh<height && nw>height)
            height=nh;
        else if (nh<height && nw<height)
            height=std::max(nh,nw);
    }
    std::cout<<"YES\n";
    return 0;
}