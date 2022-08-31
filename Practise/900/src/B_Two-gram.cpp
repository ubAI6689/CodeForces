#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
int main()
{
    int n; std::cin>>n;
    std::string s; std::cin>>s;
    std::map<std::string, int> two_gram;
    two_gram.clear();

    for (int i = 0; i < n-1; i++)
    {
        std::string temp = s.substr(i,2);
        two_gram[temp]++;
    }

    std::vector<int> v;
    for (int i = 0; i < n-1; i++)
    {
        std::string temp = s.substr(i,2);
        int c =  two_gram[temp];
        v.push_back(c);
    }

    sort(v.begin(), v.end(), std::greater<int>());
    std::string key = " ";
    for (auto &i : two_gram)
        if (i.second == v[0]) 
        {
           key = i.first;
           std::cout<<key;
           break; // to stop searching
        }
    return 0;
}