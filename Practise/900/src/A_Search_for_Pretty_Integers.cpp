#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
int main()
{
    int n, m;
    std::cin>>n>>m;
    std::vector<int> first;
    std::vector<int> second;
    std::vector<int> repeated;
    std::map<int, int> tracker;
    for (int i = 0, x; i < n && std::cin>>x; i++) 
    {
        first.push_back(x);
        tracker[x]++;
    }

    for (int i = 0, x; i < m && std::cin>>x; i++) 
    {
        second.push_back(x);
        tracker[x]++;
        if (tracker[x] == 2) repeated.push_back(x);
    }

    if (repeated.size() != 0)
    {
        sort(repeated.begin(), repeated.end());
        std::cout<<repeated[0];
        return 0;
    }
    else
    {
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        first[0] < second[0] ? std::cout<<first[0]<<second[0] : std::cout<<second[0]<<first[0];
        return 0;
    }
}