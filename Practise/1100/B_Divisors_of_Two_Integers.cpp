#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
int main()
{
    int n; std::cin>>n;
    std::vector<int> v(n);
    for (int i=0; i<n; i++)
        std::cin>>v[i];
    std::sort(v.begin(), v.end(), std::greater<int>());

    std::cout<<v[0]<<' ';
    for(int i=1; i<n; i++)
    {
        if (v[0]==v[i])
        {
            std::cout<<v[i]<<'\n';
            return 0;
        }

        if (v[0]%v[i]!=0)
        {
            std::cout<<v[i]<<'\n';
            return 0;
        }
        else if (v[0]%v[i]==0)
        {
            if (v[i+1]==v[i])
            {
                std::cout<<v[i];
                return 0;
            }
        }
    }
    return 0;
}