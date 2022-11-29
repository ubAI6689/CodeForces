#include <bits/stdc++.h>
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n, a;
        std::cin>>n;
        bool flag = true;
        int ans[n+1];
        for (int i = 1; i <= n; i++)
        {
            ans[i]=i;
        }
        for (int i = 1; i <= n; i++)
        {
            std::cin>>a;
            if (a < i)
            {
                flag = false;
            }
            if (a > i)
            {
                std::swap(ans[i], ans[a]);
            }
        }
        if (!flag)
        {
            std::cout<<"-1"<<std::endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                std::cout<<ans[i]<<" ";
            }
            std::cout<<std::endl;
        }
    }
}