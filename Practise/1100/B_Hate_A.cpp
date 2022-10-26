#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    
    std::string a,b,t;
    std::cin>>t;
    for (int i=0;i<t.length();i++)
    {
        a+=t[i];
        if(t[i]!='a')
            b+=t[i];
        if (a.length()+b.length()==t.length())
            break;
    }
    if (t==a+b)
        std::cout<<a<<'\n';
    else
        std::cout<<":("<<'\n';
    return 0;
}