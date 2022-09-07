#include <iostream>
#include <string>
#include <algorithm>

// Function to reverse a string
void reverseStr(std::string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        std::swap(str[i], str[n - i - 1]);
}

int main()
{
    std::string s; std::cin>>s;
    std::string r = s;
    reverseStr(s);
    if (r == s) {std::cout<<"YES\n"; return 0;}
    
    for (int i = 0; i < r.length(); i++)
    {
        if (s[0] == '0') s.erase(s.begin());
        else break;
    }
    r = s;
    reverseStr(s);
    r == s ? std::cout<<"YES\n" : std::cout<<"NO\n";
    
    return 0;
}