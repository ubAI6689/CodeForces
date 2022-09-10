#include <iostream>
int main()
{
    int page; std::cin>>page;
    int day=0;
    int temp=0;
    for (int i=1; i<=page; i++)
    {
        int x; std::cin>>x;
        if (temp<x) temp=x;
        if (i==temp) day++;
    }
    std::cout<<day;
    return 0;
}