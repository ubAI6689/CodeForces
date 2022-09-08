// https://codeforces.com/problemset/problem/820/A
#include <iostream>
int c, v0, v1, a, l;
int count=1;
int main()
{
    std::cin>>c>>v0>>v1>>a>>l;
    c-=v0;
    while (c>0)
    {
        v0=std::min(v0+a, v1);
        c-=v0;
        c+=l;
        count++;
    }
    std::cout<<count;
    return 0;
}