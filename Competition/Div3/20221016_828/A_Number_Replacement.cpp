#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>

int main()
{
    int n; std::cin>>n;
    while(n--)
    {
        std::map<int, std::vector<int>> vmap;
        int l; std::cin>>l;
        for (int i=0; i<l; i++)
        {
            int x; std::cin>>x;
            vmap[x].push_back(i);
        }
        std::string s;
        std::cin>>s;

        std::map<int, std::vector<int>>::iterator it;
        for (it = vmap.begin(); it!=vmap.end(); it++)
        {
            if (it->second.size()>1)
            {
                std::set<char> res;
                for (int i=0; i<it->second.size();i++)
                {
                    res.insert(s[it->second[i]]);
                }
                if (res.size()>1)
                {
                    std::cout<<"NO\n";
                    goto exit;
                }
            }
        }
        std::cout<<"YES\n";
        exit:
        continue;
    }
    return 0;
}