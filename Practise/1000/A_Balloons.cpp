#include <iostream>
int main()
{
    int n; std::cin>>n;
    int array[n];
    for (int i=0; i<n; i++)
    {
        int x; std::cin>>x;
        array[i]=x;
    }
    
    if (n%2!=0)
    {
        if (n!=1)
        {
            int min = 0;
            int index = -1;
            // Iterate the array
            for(int i=0; i < n; i++)
            {
                if(array[i] < min || min == 0)
                {
                    //If current value is less than min value
                    // then replace it with min value
                    min = array[i];
                    index = i;
                }
            }
            std::cout<<1<<'\n';
            std::cout<<index+1;
        }
        else
            std::cout<< -1;
    }
    else
    {
        if (n==2)
        {
            if (array[0]!=array[1])
                std::cout<<1<<'\n'<<1;
            else
                std::cout<< -1;
        }
        else
        {
            int min = 0;
            int index = -1;
            // Iterate the array
            for(int i=0; i < n; i++)
            {
                if(array[i] < min || min == 0)
                {
                    //If current value is less than min value
                    // then replace it with min value
                    min = array[i];
                    index = i;
                }
            }
            std::cout<<1<<'\n';
            std::cout<<index+1;
        }
    }
    return 0;
}