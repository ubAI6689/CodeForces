#include <iostream>
#include <string>
#include <algorithm>
#include <set>

int main()
{
    std::string s; std::cin>>s;

    std::set<char> c;
    for (int i = 0; i < s.length(); i++) c.insert(s[i]);
    if (c.size() == 1) {std::cout<<0; return 0;}

    for (int i = 0; i < s.length(); i++)
    {
        std::string temp = s;
        std::reverse(s.begin(), s.end());
        if (s == temp) {s.pop_back(); continue;}
        else {std::cout << s.length(); return 0;}
    } 
    return 0;
}