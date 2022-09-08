//https://codeforces.com/problemset/problem/814/A
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int m, n;
    std::cin>>m>>n;
    int array[m];
    std::vector<int> zero;
    for (int i=0, x; i<m && std::cin>>x; i++) 
    {
        array[i]=x;
        if (array[i] == 0)
            zero.push_back(i);
    }

    std::vector<int> candidate;
    for (int i=0, x; i<n && std::cin>>x; i++)
        candidate.push_back(x);
    sort(candidate.begin(), candidate.end(), std::greater<int>());

    for (int i = 0; i < n; i++)
    {
        int index = zero[i];
        array[index] = candidate[i];
    }

    int cnt=1;
    for (int i=1; i<m; i++)
    {
        if (array[i]>array[i-1])
            cnt++;
    }
    cnt==m ? std::cout<<"No" : std::cout<<"Yes";
    return 0;
}