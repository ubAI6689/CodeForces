#include <bits/stdc++.h>
typedef long long ll;

// You are given an array a[0…n−1] of n integers. This array is called a "valley" if there exists 
// exactly one subarray a[l…r] such that:

// 0≤l≤r≤n−1,
// al=al+1=al+2=⋯=ar,
// l=0 or al−1>al,
// r=n−1 or ar<ar+1.

int main()
{
    int T; std::cin >> T;
    while(T--)
    {
        int n; std::cin >> n;

        if (n == 1)
        {
            ll x; std::cin >> x;
            std::cout << "YES\n";
            continue;
        }

        std::vector<ll> v(n);
        std::vector<std::string> ans; 
        bool is_decreasing = false;
        bool is_increasing = false;
        for (int i = 0; i < n; ++i)
        {
            std::cin >> v[i];
            if (i > 0)
            {
                if (v[i] < v[i-1])
                {
                    if (is_increasing)
                    {
                        ans.push_back("increasing");
                        is_increasing = false;
                    }
                    is_decreasing = true;
                }
                else if (v[i] > v[i-1])
                {
                    if (is_decreasing)
                    {
                        ans.push_back("decreasing");
                        is_decreasing = false;
                    }
                    is_increasing = true;
                }
            }
        }
        if (is_decreasing)
            ans.push_back("decreasing");
        if (is_increasing)
            ans.push_back("increasing");
        if (ans.size() == 1)
            std::cout << "YES\n";
        else if (ans.size() == 2)
        {
            if (ans[0] == "decreasing" && ans[1] == "increasing")
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
        else if (ans.size()==0)
        {
            if (v[0] == v[n-1])
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
        else
            std::cout << "NO\n";
    }
    return 0;
}