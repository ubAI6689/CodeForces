#include <iostream>
#include <map>
int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        int n,c;
        std::cin>>n>>c;

        int cnt=0;
        std::map<int,int> m;
        for (int i=0; i<n; i++)
        {
            int x; std::cin>>x;
            m[x]++;
        }

        std::map<int,int>::iterator it;
        for (it = m.begin(); it!=m.end(); ++it)
        {
            if (it->second == 1) cnt++;
            else cnt=cnt+std::min(c,it->second);
        }
        std::cout<<cnt<<'\n';
    }
    return 0;
}