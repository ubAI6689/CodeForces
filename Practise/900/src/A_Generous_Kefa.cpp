// https://codeforces.com/problemset/problem/841/A
#include <iostream>
#include <string>
#include <map>
int main()
{
    int n, k;
    std::cin>>n>>k;
    std::string s;
    std::cin>>s;
    
    std::map<char, int> counter;
    for (int i = 0; i < s.length(); i++)
    {
        counter[s[i]]++;
        if (counter[s[i]]>k) {std::cout<<"NO\n"; return 0;}
    }
    std::cout<<"YES\n";
    return 0;
}