// https://codeforces.com/problemset/problem/1311/A
#include <iostream>
typedef long long ll;
int main()
{
    int t; std::cin >> t;
    while(t--)
    {
        ll a, b;
        std::cin >> a >> b;
        ll diff = abs(a - b);

        if (diff == 0) std::cout << 0 << std::endl;
        else if (diff % 2 == 0) // if different is even
        {
            if (a < b) std::cout << 2 << std::endl; // eg 1 5 --> +1 +3
            else std::cout << 1 << std::endl; // eg 4 2 --> -2 
        }
        else // if different is odd
        {
            if (a < b) std::cout << 1 << std::endl;// eg 1 4 --> +3
            else std::cout << 2 << std::endl;// eg 4 1 --> -4 +1
        }
    }
    return 0;
}