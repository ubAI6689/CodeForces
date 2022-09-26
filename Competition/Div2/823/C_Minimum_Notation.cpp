#include <iostream>
#include <string>
#include <map>
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        std::string s;
        std::cin>>s;
        if (s.length()==1)
        {
            std::cout<<s<<'\n';
            continue;
        }
        if (s.length()==2 && s[0]=='0')
        {
            std::cout<<s<<'\n';
            continue;
        }

        for (int i=0; i<s.length(); i++)
        {
            if (s[i]>s[i+1])
            {
                s.append(std::stoi(s[i]+1));
                s.erase(s.begin()+i);
            }
        }        
    }
    return 0;
}