#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    int n, x, y;
    std::cin>>n>>x>>y;
    std::string s;
    std::cin>>s;
    std::reverse(s.begin(),s.end());

    int cnt=0;
    for (int i=0; i<x; i++)
    {
        if (i==y)
        {
            if (s[i]!='1')
                cnt++;
            continue;
        }

        if (s[i]!='0')
            cnt++;
    }
    std::cout<<cnt;
    return 0;
}