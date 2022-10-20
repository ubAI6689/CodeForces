#include <iostream>
#include <set>
int main()
{
    int T;std::cin>>T;
    while(T--)
    {
        int n,m;
        std::cin>>n>>m;
        std::set<int> x,y;
        for (int i=0; i<m; i++)
        {
            int temp_x, temp_y;
            std::cin>>temp_x>>temp_y;
            x.insert(temp_x);
            y.insert(temp_y);
        }
        if (x.size()<n || y.size()<n)
            std::cout<<"YES\n";
        else
            std::cout<<"NO\n";
    }
    return 0;
}