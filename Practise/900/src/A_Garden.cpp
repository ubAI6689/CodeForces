#include <iostream>

int main()
{
    int n, k;
    std::cin>>n>>k;

    int temp = 0;
    for (int i=0, x; i<n && std::cin>>x; i++)
        if (k%x==0) 
            if (temp<x) 
                temp=x;
    
    std::cout<<k/temp;
    return 0;
}