#include <bits/stdc++.h>
typedef long long ll;
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n; std::cin>>n;
        ll a[n];
        for (int i=0; i<n; i++)
        {
            std::cin>>a[i];
        }

        int i = 1;
        while (i < n)
        {
            if (a[0] < a[i])
            {
                ll diff = a[i] - a[0];
                if (diff < 10)
                {
                    a[0]++;
                    a[i]--;
                }
                else
                {
                    a[0] += diff/2;
                    a[i] -= diff/2;
                }
            }
            else
            {
                i++;
            }
        }
        std::cout<<a[0]<<std::endl;
    }
}