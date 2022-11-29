// https://codeforces.com/problemset/problem/1214/C

#include <bits/stdc++.h>
int main()
{
    int n; std::cin>>n;
    std::string s; std::cin>>s;

    int ans = 0;
    for (int i=0; i<n; i++)
    {
        if (s[i] == '(') // If the current character is '('
        {
            ans++; // Increase the answer
        }
        else // If the current character is ')'
        {
            ans--; // Decrease the answer
        }
        if (ans < -1) // If the answer is negative
        {
            std::cout<<"No"<<std::endl; // The string is not balanced
            return 0;
        }
    }
    if (ans == 0) // If the answer is zero
    {
        std::cout<<"Yes"<<std::endl; // The string is balanced
    }
    else // If the answer is not zero
    {
        std::cout<<"No"<<std::endl; // The string is not balanced
    }
}