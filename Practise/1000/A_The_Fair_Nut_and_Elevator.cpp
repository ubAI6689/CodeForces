#include <iostream>
#include <map>
int main()
{
    int n; std::cin>>n;
    std::map<int,int> floor;
    for (int i=0; i<n; i++)
    {
        int x; std::cin>>x;
        floor[i]=x;
    }
    int electricity=0;
    for (int i=0; i<n; i++)
        electricity+=2*floor[i]*(2*i);
    std::cout<<electricity;
    return 0;
}