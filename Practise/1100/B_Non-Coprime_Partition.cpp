// https://codeforces.com/problemset/problem/1038/B

#include <bits/stdc++.h>

int main()
{
    int n; std::cin>>n; // number

    if (n<=2)
    {
        std::cout<<"No\n";
        return 0;
    }
    else
    {
        // yes, we can split into two groups
        std::cout<<"Yes"<<std::endl;
        // find the number of elements in each group
        int k = (n % 2 == 0) ? (n / 2) : ((n + 1) / 2);
        // print the size of each group
        std::cout << "1 " << k << std::endl;

        // print the elements in first group
        std::cout << n - 1 << " ";
        // print the elements in the second group
        for (int i = 1; i <= n; i++)
        {
            if (i == k)
                continue;
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}