#include <iostream>
#include <string>
#include <vector>
int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        int n; std::cin>>n;
        std::string code; std::cin>>code;

        std::vector<int> v;
        for (int i=0; i<n; i++)
        {
            if (code[i+2]=='0' && code[i+3]=='0')
            {
                std::string sub1 = code.substr(i,1);
                int ia = std::stoi(sub1);
                v.push_back(ia);
                continue;
            }

            if (code[i+2] != '0')
            {
                int ia = code[i]-'0';
                v.push_back(ia);
            }
            else
            {
                std::string sub = code.substr(i, 3);
                int ia = std::stoi(sub);
                v.push_back(ia);
                i+=2;
            }
        }
        for (auto it:v) 
        {
            if (it>=100) it = it/10;
            std::cout<<(char)(it+96);
        }
        std::cout<<'\n';
    }
    return 0;
}