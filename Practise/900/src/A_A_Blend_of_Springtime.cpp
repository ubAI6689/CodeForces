#include <iostream>
#include <string>
int main()
{
    std::string s; std::cin>>s;
    for (int i = 1; i < s.length()-1; i++)
    {
        if(s[i] == 'A')
        {
            if ((s[i-1] == 'B' && s[i+1] == 'C')||(s[i-1] == 'C' && s[i+1] == 'B'))
            {   std::cout<<"Yes\n";
                return 0;
            }
        }
        else if(s[i] == 'B')
        {
            if ((s[i-1] == 'A' && s[i+1] == 'C')||(s[i-1] == 'C' && s[i+1] == 'A'))
            {   std::cout<<"Yes\n";
                return 0;
            }
        }
        else if(s[i] == 'C')
        {
            if ((s[i-1] == 'A' && s[i+1] == 'B')||(s[i-1] == 'B' && s[i+1] == 'A'))
            {   std::cout<<"Yes\n";
                return 0;
            }
        }
    }
    std::cout<<"No\n";
    return 0;
}