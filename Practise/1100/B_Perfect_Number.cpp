// https://codeforces.com/problemset/problem/919/B

#include <bits/stdc++.h>

// function to find an integer's sum of digits == 10
bool isPerfect(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return (sum == 10);
}

int main()
{
    int n; std::cin>>n;
    std::vector<int> v;
    for (int i=19; v.size() < n; i++)
    {
        if (isPerfect(i))
        {
            v.push_back(i);
        }
    }
    
    std::cout<<v[n-1];
    return 0;
}