// correction from tutorial https://codeforces.com/blog/entry/60138
#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    int n; std::string s;
    std::cin>>n>>s;
    for (int i = 1; i <=n; ++i)
    {
        if (n%i==0) std::reverse(s.begin(),s.begin()+i);
    }
    std::cout<<s;
    return 0;
}



// #include <iostream>
// #include <string>

// std::string reverseStr(std::string t)
// {
//     int l = t.length();

//     for (int i = 0; i < l/2; i++)
//         std::swap(t[i],t[l-1-i]);
    
//     return t;
// }

// int main()
// {
//     int n; std::cin >> n;
//     std::string t; std::cin >> t;

//     std::string res;
//     while(n/2>0)
//     {   
//         std::string temp = t.substr(n-n/2);
//         t = reverseStr(temp);
//         for (int i = 0; i < n/2; i++) std::cout<<t[i];
//         n = n/2;
//     }
//     // std::cout<<res;
//     return 0;
// }

