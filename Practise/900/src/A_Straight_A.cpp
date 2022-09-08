#include <iostream>
int main()
{
    float n,k;
    std::cin>>n>>k;
    
    float sum=0;
    for (int i=0;i<n;i++)
    {
        float x;
        std::cin>>x;
        sum+=x;
    }
    
    float target_mark=k-0.5;
    int cnt=0;
    while(sum/n<target_mark)
    {
        sum+=k;
        n++;
        cnt++;
    }
    std::cout<<cnt;
    return 0;
}