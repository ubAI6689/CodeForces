//https://codeforces.com/problemset/problem/1042/A

#include <bits/stdc++.h>

int main()
{
    int n; std::cin>>n; // number of benches
    int m; std::cin>>m; // number of additional people coming
    int a[n];
    for (int i = 0; i < n; i++)
    {
        // number of people sitting on each bench initially
        std::cin>>a[i];
    }
    // distribute m people among the benches 1 by 1 to get minimum maximum
    // sort the array a in ascending order
    std::sort(a, a+n);
    int max = a[n-1]+m ; // maximum number of people sitting on a bench

    // distribute m people among the benches 1 by 1 to get smallest maximum
    for (int i = 0; i < m; i++)
    {
        a[0]++; // add 1 to the first bench
        std::sort(a, a+n); // sort the array a in ascending order
    }
    // the maximum number of people sitting on a bench is the last element of the array a
    int min = a[n-1];

    std::cout<<min<<" "<<max<<std::endl;
    return 0;
}