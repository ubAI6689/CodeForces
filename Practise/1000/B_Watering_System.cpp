#include <iostream>
#include <algorithm>
int main()
{
    int n;
    int A, B;
    std::cin>>n>>A>>B;
    
    int array[n];
    int sum=0;
    for (int i=0; i<n; i++)
    {
        std::cin>>array[i];
        sum+=array[i];
    }

    std::sort(array+1, array+n, std::greater<float>());
    int flow=(array[0]*A)/sum;
    int index=0;
    while(flow<B)
    {
        index++;
        sum-=array[index];
        flow=(array[0]*A)/sum;
    }
    std::cout<<index;
    return 0;
}