#include <bits/stdc++.h>

// std::string add_binary(std::string a, std::string b)
// {
//     std::string result="";
//     int temp=0;
//     int size_a=a.size()-1;
//     int size_b=b.size()-1;
//     while(size_a>=0||size_b>=0||temp==1)
//     {
//         temp+=((size_a>=0)?a[size_a]-'0':0);
//         temp+=((size_b>=0)?b[size_b]-'0':0);
//         result=char(temp%2+'0')+result;
//         temp/=2;
//         size_a--; size_b--;
//     }
//     return result;
// }

// int main()
// {
//     int T; std::cin>>T;
//     while (T--)
//     {
//         std::string x; std::cin>>x;
//         std::string y; std::cin>>y;
//         std::cout<<add_binary(x,y);
//         std::cout<<'\n';
//     }
//     return 0;
// }

int T,i,j;
std::string x,y;
int main()
{
    for(std::cin>>T;T--;)
    {
        std::cin>>x>>y;
        for(j=0;y[y.size()-1-j]=='0';j++);
        for(i=0;x[x.size()-1-j-i]=='0';i++);
        std::cout<<i<<'\n';
    }
    return 0;
}