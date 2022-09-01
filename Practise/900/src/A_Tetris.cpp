#include <iostream>
int main()
{
    int n, m; 
    std::cin>>n>>m;

    int point = 0;
    int array[n+1]={};
    int count = 0;
    for (int i = 0, x; i < m && std::cin>>x; i++)
    {
        if (array[x] == 0)
        {
            array[x]++;
            count++;
        }
        else array[x]++;

        if (count == n)
        {
            point++;
            for (int j = 1; j <= n; j++)
                {
                    array[j]--;
                    if (array[j] == 0) count--;
                }
        }
    }
    std::cout<<point;
    return 0;
}