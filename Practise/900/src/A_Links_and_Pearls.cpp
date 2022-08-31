#include <iostream>
#include <string>
int main()
{
    std::string s; std::cin>>s;
    int pearl = 0; int link = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'o') pearl++;
        else if (s[i] == '-') link++;
    }
    
    if (link == 0 && pearl != 0) {std::cout<<"YES\n"; return 0;}
    else if (link != 0 && pearl == 0 ) {std::cout<<"YES\n"; return 0;}

    if (link%pearl==0) std::cout<<"YES\n";
    else std::cout<<"NO\n";
    return 0;
}