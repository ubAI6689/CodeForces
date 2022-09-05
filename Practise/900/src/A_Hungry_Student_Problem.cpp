#include <iostream>

int main()
{
    int n; std::cin>>n;
    while(n--)
    {
        int x; std::cin>>x;
        (x == 1 || x == 2 || x == 4 || x == 5 || x == 8 || x == 11) ?
        std::cout << "NO" << std::endl : std::cout << "YES" << std::endl;
    }
    return 0;
}