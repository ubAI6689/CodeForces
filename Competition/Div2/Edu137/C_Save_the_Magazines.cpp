#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n; std::cin>>n;
        std::string lid; std::cin>>lid;
        int array[n];
        for (int i=0; i<n; i++)
        {
            std::cin>>array[i];
        }

        for (int i=0, j=-1; i<n; i++)
        {
            if (lid[i]=='0')
            {
                j=i;
            }
            else if (j>=0 && array[i]<array[j])
            {
                std::swap(lid[i],lid[j]);
                j=i;
            }
        }

        int ans = 0;
        for (int i=0; i<n; i++)
        {
            if (lid[i]=='1')
            {
                ans+=array[i];
            }
        }
        std::cout<<ans<<'\n';
    }
    return 0;
}
