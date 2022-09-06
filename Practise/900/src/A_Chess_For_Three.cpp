#include <iostream>

int main()
{
    int n; std::cin>>n;
    int p1 = 1;
    int p2 = 2;
    int sp = 3;
    for (int i = 1; i <= n; i++)
    {
        int winner;
        std::cin>>winner;
        if (winner == p1) 
        {
            int temp = sp;
            sp = p2;
            p2 = temp;
        }
        else if (winner == p2)
        {
            int temp = sp;
            sp = p1;
            p1 = temp;
        }
        else if (winner == sp)
        {
            std::cout<<"NO\n";
            return 0;
        }
    }
    std::cout<<"YES\n";
    return 0;
}