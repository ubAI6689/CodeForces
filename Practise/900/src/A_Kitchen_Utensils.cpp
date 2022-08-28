// https://codeforces.com/problemset/problem/1032/A
#include <iostream>
#include <set>
int main()
{
    int n, k;
    std::cin>>n>>k;
    
    int array[n];
    std::set<int> left;
    for (int i=0, x; i<n && std::cin>>x; i++) 
    {
        array[i] = x;
        left.insert(x);
    }

    int count=0;
    for (auto it:left)
    {
        int sub_count=0;
        for (int i=0; i<n; i++) {if (array[i]==it) sub_count++;}
        if (count<sub_count) count=sub_count;
    }
    count%k == 0 ? std::cout<<count*left.size()-n : std::cout<<(count+k-count%k)*left.size()-n;
    return 0;
}