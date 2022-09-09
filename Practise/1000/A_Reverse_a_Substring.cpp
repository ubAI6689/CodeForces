#include <iostream>
#include <string>
int main()
{
    int n; std::cin>>n;
    std::string s; std::cin>>s;
    for (int i=0; i<n; i++)
    {   
        if (i == n-1) {std::cout<<"NO"; return 0;}
        if (s[i]>s[i+1])
        {
            std::cout<<"YES\n";
            std::cout<<i+1<<' '<<i+1+1;
            return 0;
        }
    }
}