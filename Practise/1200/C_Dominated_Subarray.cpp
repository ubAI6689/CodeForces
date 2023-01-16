#include <bits/stdc++.h>

int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n; std::cin>>n;

        if (n == 1)
        {
            int x; std::cin>>x;
            std::cout<<-1<<'\n';
            continue;
        }

        // dictionary to store the frequency of each element and its index
        std::map<int, std::vector<int>> m;
        
        int len = n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            std::cin>>a[i];
            m[a[i]].push_back(i);

            // if size of the vector is equal to 2, 
            // find the length of the subarray between the two occurences
            if (m[a[i]].size() == 2)
            {
                len = std::min(len, m[a[i]][1] - m[a[i]][0] + 1);
                // remove the first element of the vector
                m[a[i]].erase(m[a[i]].begin());
                if (len == n)
                {
                    std::cout<<len<<'\n';
                    goto end;
                }
            }
        }
        if (len == n)
        {
            std::cout<<-1<<'\n';
        }
        else
        {
            std::cout<<len<<'\n';
        }
        end:;
    }
    return 0;
}