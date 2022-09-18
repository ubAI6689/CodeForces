#include <iostream>
int main()
{
    int n; std::cin>>n;
    int array[n];
    int cnt=0;
    for (int i=0; i<n; i++)
        std::cin>>array[i];
    for (int i=0; i<n; i++)
    {
        if (array[i]==1 && array[i+1]==0 && array[i+2]==1)
        {
            array[i+2]=0;
            cnt++;
        }
    }
    std::cout<<cnt;
    return 0;
}