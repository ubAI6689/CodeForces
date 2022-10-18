#include <iostream>
#include <algorithm>
int n;
int main()
{
    std::cin>>n;
    int array[n];
    for (int i=0;i<n;i++)
    {
        std::cin>>array[i];
    }
    std::sort(array, array+n);
    
    if(array[n-1]>=array[n-2]+array[n-3])
    {
        std::cout<<"NO\n";
    }
    else
    {
        std::cout<<"YES\n";
        std::swap(array[n-1],array[n-2]);
        for (auto i:array) std::cout<<i<<' ';
    }
    return 0;
}