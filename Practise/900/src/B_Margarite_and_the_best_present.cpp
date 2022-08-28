// https://codeforces.com/problemset/problem/1080/B
#include <iostream>
#include <cmath>
typedef long long ll;

int main()
{
    int n; std::cin >> n;
    while(n--)
    {
        ll min, max;
        ll sum = 0;
        std::cin >> min >> max;

        int sum1 = 0; 
        if ((min - 1) % 2 == 0) sum1 = (min - 1)/2;
        else sum1 = (min-1)/2 - (min - 1);

        int sum2 = 0;
        if (max % 2 == 0) sum2 = max/2;
        else sum2 = (max-1)/2 - max;

        std::cout << sum2 - sum1 << std::endl;
    }
    return 0;
}