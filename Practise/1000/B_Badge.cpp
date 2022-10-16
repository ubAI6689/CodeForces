#include <iostream>
#include <vector>
int main()
{
    int n; std::cin>>n;
    std::vector<int> v;
    for (int i=0,x; i<n && std::cin>>x; i++)
        v.push_back(x);
    
    for (int i=1; i<=n; i++)
    {
        int array[n+1]={0};
        array[i]++;
        int index=v[i-1];
        while(true)
        {
            array[index]++;
            if (array[index]>1)
            {
                std::cout<<index<<" ";
                break;
            }
            index=v[index-1];
        }
    }
    return 0;
}