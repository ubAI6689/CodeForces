#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    int n; std::cin>>n;
    ll array[n];
    for (int i=0; i<n; i++)
    {
        std::cin>>array[i];
    }

    int MIN = array[0];
    int MIN_INDEX = 0;
    int min_distance = INT_MAX;

    for (int i=1; i<n; i++)
    {
        if (array[i] == MIN)
        {
            MIN = array[i];
            min_distance = std::min(min_distance, i - MIN_INDEX);
            MIN_INDEX = i;
        }
        else if (array[i] < MIN)
        {
            MIN = array[i];
            min_distance = INT_MAX;
            MIN_INDEX = i;
        }
    }
    std::cout<<min_distance;
    return 0;
}