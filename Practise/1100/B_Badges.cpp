#include <bits/stdc++.h>
int main()
{
    int b, g, n; // boy, girl, total number of participants
    std::cin >> b >> g >> n;

    // total number of ways to pair up the participants
    int total = 0;

    // loop through all possible number
    int max = std::max(b, g);
    for (int i = 0 ; i <= max ; i++)
    {
        // if the
        if (i <= b && n - i <= g && n - i >= 0)
        {
            total++;
        }
    }

    std::cout << total << std::endl;
    return 0;
}