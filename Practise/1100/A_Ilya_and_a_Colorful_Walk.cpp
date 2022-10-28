#include <iostream>
int main()
{
    int n; std::cin>>n;
    int array[n];
    for (int i=0; i<n; i++)
        std::cin>>array[i];

    int i=0;
    while(true)
    {
        if (array[i]!=array[n-1-i])
        {
            std::cout<<n-1-i;
            break;
        }
        if (array[i]!=array[n-2-i])
        {
            std::cout<<n-2-i;
            break;
        }
        i++;
    }
    return 0;
}