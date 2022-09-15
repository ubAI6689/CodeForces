#include <iostream>
#include <string>

bool isVowel(char word)
{
    if (word=='a' || word=='e' || word=='i' ||
        word=='o' || word=='u') return true;
    else return false;
}

int main()
{
    std::string s, t;
    std::cin>>s>>t;
    if (s.length()!=t.length())
    {
        std::cout<<"No\n";
        return 0;
    }

    for (int i=0; i<s.length(); i++)
    {
        if ((isVowel(s[i]) && !isVowel(t[i])) || (!isVowel(s[i]) && isVowel(t[i])))
        {
            std::cout<<"No\n";
            return 0;
        }     
    }
    std::cout<<"Yes\n";
    return 0;
}