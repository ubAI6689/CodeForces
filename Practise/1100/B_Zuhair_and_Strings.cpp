#include <iostream>
#include <string>
#include <map>
int main()
{
    int n,k;
    std::cin>>n>>k;
    
    std::string s;
    std::cin>>s;

    if (n==k==1)
    {
        std::cout<< 1;
        return 0;
    }

    int level=0;
    std::map<char,int> c_map;
    char temp = s[0];
    int cnt=1;
    for (int i=1; i<n; i++)
    {
        if (s[i]==temp)
        {
            cnt++;
        }
        else
        {
            int sub = cnt/k;
            c_map[temp]+=sub;
            if (level<c_map[temp])
                level=c_map[temp];
            cnt=1;
            temp=s[i];
        }

        if (i==n-1 && s[i]==temp)
        {
            int sub = cnt/k;
            c_map[temp]+=sub;
            if (level<c_map[temp])
                level=c_map[temp];
        }
    }
    std::cout<<level;
    return 0;
}