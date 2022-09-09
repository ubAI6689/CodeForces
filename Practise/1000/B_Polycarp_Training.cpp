#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n; std::cin>>n;
    std::vector<int> v;
    for (int i=0, x; i<n && std::cin>>x; i++)
        v.push_back(x);
    sort(v.begin(),v.end());

    int day=0;
    for (int i=0; i<n; i++)
    {
        if (v[i]>day)
            day++;
    }
    std::cout<<day;
    return 0;
}