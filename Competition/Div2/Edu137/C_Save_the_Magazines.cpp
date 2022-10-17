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
        int original_sum=0;
        int array[n];
        for (int i=0; i<n; i++)
        {
            std::cin>>array[i];
            if (lid[i]=='1')
                original_sum+=array[i];
        }

        int res=0;
        for (int i=1; i<lid.length();i++)
        {
            if ((lid[i]=='1' && lid[i-1]=='0') && (array[i]<=array[i-1]))
            {
                lid[i]='0';
                res+=array[i-1];
                continue;
            }
            if ((lid[i]=='1' && lid[i-1]=='0') && (array[i]>array[i-1]))
            {
                if (i==lid.length()-1)
                {
                    res+=array[i];
                    continue;
                }
                if (lid[i+1]=='1' && array[i+1]<=array[i-1])
                {
                    lid[i]='0';
                    res+=array[i-1];
                    continue;
                }
            }
            if (lid[i]=='1')
                res+=array[i];
        }
        // std::cout<<lid<<'\n';
        std::cout<<res<<'\n';
    }
    return 0;
}
