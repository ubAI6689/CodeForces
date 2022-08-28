#include <iostream>
#include <string>
int main()
{
    std::string s,t;
    std::cin >> s; int s_len = s.length();
    std::cin >> t; int t_len = t.length();

    if (s == t) {std::cout<<0; return 0;}

    int sameLetterFromRight = 0;
    while(true)
    {   
        if (s[s_len - 1] == t[t_len - 1])
        {
            sameLetterFromRight++;
            s_len--; t_len--;
        }
        else break;
    }
    std::cout<<s.length()+t.length()-2*sameLetterFromRight;
    return 0;
}