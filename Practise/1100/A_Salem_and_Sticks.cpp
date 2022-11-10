#include <iostream>
#include <vector>
const int INF = 1000000;
int main()
{
    int n; std::cin>>n;
    std::vector<int> v(n);
    for (int i=0; i<n; i++)
        std::cin>>v[i];
    
    int sum = INF, t = 0;
    for (int i=1;i<=100;i++)
    {   
        int t_sum = 0;
        for (auto it : v)
        {
            if (abs(it-i)<=1)
                continue;
            t_sum+=abs(it-i)-1;
        }
        if (t_sum < sum)
        {
            sum = t_sum;
            t = i;
        }
    }

    std::cout<<t<<" "<<sum;
    return 0;
}