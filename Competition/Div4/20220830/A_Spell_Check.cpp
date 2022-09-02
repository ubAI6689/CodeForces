#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    int t; std::cin >> t;
    while(t--)
    {
        int n; std::cin>>n;
        std::string timur = "Timur";
        sort(timur.begin(),timur.end());
        
        std::string s; std::cin>>s;
        if (n!=5) {std::cout<<"NO\n";continue;}
        sort(s.begin(),s.end());
        if (s==timur) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
    return 0;
}