#include <iostream>
#include <map>
#include <string>
int main()
{
    int n, m;
    std::cin>>n>>m;
    std::map<std::string, std::string> web;
    for (int i = 0; i < n; i++)
    {
        std::string website, ip;
        std::cin>>website>>ip;
        web[ip] = website;
    }

    for (int i = 0; i < m; i++)
    {
        std::string action, ip;
        std::cin>>action>>ip;
        ip.pop_back();

        std::cout<<action<<" "<<ip<<"; #"<<web[ip]<<'\n';
    }

    return 0;
}