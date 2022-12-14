#include <bits/stdc++.h>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> a[i][j];
        }
    }
    
    int count = 0;
    // vector of pair
    std::vector<std::pair<int, int>> v;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (a[i][j] * a[i][j + 1] * a[i + 1][j] * a[i + 1][j + 1] > 0)
            {
                count++;
                v.push_back(std::make_pair(i + 1, j + 1));
                a[i][j] = 2;
                a[i][j + 1] = 2;
                a[i + 1][j] = 2;
                a[i + 1][j + 1] = 2;
            }
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                cnt1++;
            }
        }
    }

    if (cnt1 > 0)
    {
        std::cout << -1 << std::endl;
        return 0;
    }
    
    std::cout << count << std::endl;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i].first << " " << v[i].second << std::endl;
    }
    return 0;
}