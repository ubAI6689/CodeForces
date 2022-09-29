#include <iostream>
int main()
{
    int T; std::cin>>T;
    start:
    while(T--)
    {
        int n; std::cin>>n;
        int array[n];
        int temp;
        for (int i=0; i<n; i++)
        {
            int x; std::cin>>x;
            array[i]=x;
        }

        for (int i=1; i<n; i++)
        {
            if (array[i-1]+array[i]!=array[i-1]-array[i] && array[i-1]-array[i]>0)
            {
                std::cout<< -1 << '\n';
                goto start;
            }
            array[i]+=array[i-1];
        }
        
        for (int i=0; i<n; i++)
            std::cout<<array[i]<<' ';

        std::cout<<'\n';        
    }
    return 0;
}