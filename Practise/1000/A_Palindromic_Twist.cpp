#include <iostream>
#include <string>

int main()
{
    int T;
    std::cin>>T;
    while(T--)
    {
        int n; std::cin>>n;
        std::string s;
        std::cin>>s;
        int cnt=0;
        for (int i = 0; i < n/2; i++)
        {
            if ((s[i]=='a' && s[n-1-i]=='a') || (s[i]=='z' && s[n-1-i]=='z'))
            {
                cnt++;
                continue;
            }

            if ((s[i] == s[n-1-i])||
            (s[i]+1 == s[n-1-i]-1)||
            (s[i]-1 == s[n-1-i]+1))
            {
                cnt++;
            }
        }
        if (cnt==n/2) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
    return 0;
}