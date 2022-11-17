// https://codeforces.com/problemset/problem/967/A

#include <bits/stdc++.h>

int main()
{
    // input the number of landings on schedule and the number of allowed time in between a landing and takeoff
    int n, s; std::cin>>n>>s;

    // n loop to input the time of the scheduled landing in hours and minutes
    int h[n], m[n];
    for (int i=0; i<n; i++)
    {
        std::cin>>h[i]>>m[i];
    }

    // if first scheduled - 2*s + 1 > 0 0; then place a landing before the first scheduled landing at 0 0
    if (h[0]*60 + m[0] - (s + 1) >= 0)
    {
        std::cout<<0<<" "<<0;
        return 0;
    }

    // calculate the gap between landing between the schedules
    // if gap > 2*s + 1, then a takeoff can be scheduled in between. Print the time of the takeoff.
    for (int i=0; i<n-1; i++)
    {
        if ((h[i+1]*60+m[i+1]) - (h[i]*60+m[i]) > 2*s + 1)
        {
            std::cout<<h[i]+(m[i]+s+1)/60<<" "<<(m[i]+s+1)%60;
            return 0;
        }
    }
    // if no available time, place a landing after the last scheduled landing, hour can be 24
    std::cout<<h[n-1]+(m[n-1]+s+1)/60<<' '<<(m[n-1]+s+1)%60;
    return 0;
}