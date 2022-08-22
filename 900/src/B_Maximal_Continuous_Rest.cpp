// https://codeforces.com/problemset/problem/1141/B
#include <iostream>
#include <array>
int main()
{
    int n; std::cin >> n;
    int hour[n];
    for (int i = 0, x; i < n && std::cin >> x; i++) hour[i] = x;

    int one = 0;
    int rest = 0;

    for (int i = 0; i < 2 * n; i++) // double the length to consider multiple days
    {
        if (hour[i % n] == 1) one++; // eg [i % 3] = 0, 1, 2, 0, 1, 2 (i = 0, 1, 2 ...)
        else 
        {
            if (rest < one) rest = one;
            one = 0;
        }
    }
    std::cout << rest << std::endl;
    return 0;
}