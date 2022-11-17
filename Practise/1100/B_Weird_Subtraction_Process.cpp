// https://codeforces.com/problemset/problem/946/B
#include <bits/stdc++.h>
int main()
{
    long long a, b; std::cin>>a>>b;
    int a, b; // declare two variables
    std::cin >> a >> b; // get input from the user
    while (a != 0 && b != 0) // while both numbers are not zero
    {
        if (a >= 2*b) // if a is larger than 2 times b
        {
            a %= 2*b; // then take the remainder after dividing a by 2 times b
        }
        else if (b >= 2*a) // if b is larger than 2 times a
        {
            b %= 2*a; // then take the remainder after dividing b by 2 times a
        }
        else // if both are smaller than 2 times the other
        {
            break; // then break out of the loop
        }
    }
    std::cout<<a<<" "<<b; // output the final result
    return 0;
}