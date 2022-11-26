#include <bits/stdc++.h>

// function to turn string s into palindrome
std::string makePalindrome(std::string s)
{
        // reverse the string
        std::string rev = std::string(s.rbegin(), s.rend());

        // append the reverse string to the original string
        s += rev;

        // return the new string
        return s;
}

int main()
{
    int n;
    std::cin >> n;
    while(n--)
    {
        std::string s;
        std::cin >> s;
        // s = s + s;
        std::cout << makePalindrome(s) << std::endl;
    }

}
