#include <bits/stdc++.h>
int main()
{
    int T; std::cin >> T;
    while(T--)
    {
        int n; std::cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        
        int ans = 0;
        int min = INT_MAX;
        for(int i = n - 1; i >= 0; i--)
        {
            if(a[i] > min) // if current element is greater than the current minimum, then increase answer
            {
                ans++;
            }
            min = std::min(min, a[i]); // update the minimum to the minimum of the current minimum and the current element
        }
        std::cout << ans << std::endl;
    }   
}