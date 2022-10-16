#include <iostream>
#include <string>
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n; char color;
        std::cin>>n>>color;
        std::string s;
        std::cin>>s;

        s+=s;
        int cnt=0;
        for (int i=0; i<s.length()/2; i++)
        {
            if (s[i]==color)
            {   
                int temp=0;
                int index=i;
                while(s[index]!='g')
                {   
                    temp++;
                    index++;
                }
                if (cnt<temp)
                    cnt=temp;
            }
            else
                continue;
        }
        std::cout<<cnt<<'\n';
    }
    return 0;
}