#include <bits/stdc++.h>

std::string add_signs(const std::string& a) 
{
    // sum equal first digit
    int sum = a[0] - '0';
    std::string signs;
    for (std::size_t i = 0; i < a.size() - 1; ++i) 
    {
        // if sum is zero, add plus sign
        if (sum == 0) 
        {
            signs += '+';
            // sum is increased by the current digit
            sum += a[i+1] - '0';
        }
        // if sum is positive, add minus sign
        else if (abs(sum) > 0) 
        {
            signs += '-';
            // sum is decreased by the current digit
            sum -= a[i+1] - '0';
        }
    }
    return signs;
}

int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        int n; std::cin>>n;
        // read string
        std::string s; std::cin>>s;
        // print result
        std::cout<<add_signs(s)<<std::endl;
    }
}