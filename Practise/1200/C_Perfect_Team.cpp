// https://codeforces.com/problemset/problem/1221/C
#include <bits/stdc++.h>

int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int c, m, x; std::cin>>c>>m>>x;
        int l = 0, r = std::min(c, m); // Binary search on the answer
        int ans = 0; // The answer
        while (l<=r) 
        {
            int mid = (l+r)/2; // The current guess
            if (c+m+x-2*mid >= mid)
            {
                l = mid+1; // If the guess is too small, increase it
                ans = mid; // Update the answer
            }
            else
            {
                r = mid-1; // If the guess is too big, decrease it
            }
        }
        std::cout<<ans<<std::endl;
    }
    return 0;
}