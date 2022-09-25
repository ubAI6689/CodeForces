#include <iostream>
int n; 
int queen_x, queen_y;
int king_x, king_y;
int target_x, target_y;

int quadrant(int x, int y)
{
    int quad;
    if (x-queen_x<0 && y-queen_y>0)
        quad = 1;
    else if (x-queen_x>0 && y-queen_y>0)
        quad = 2;
    else if (x-queen_x>0 && y-queen_y<0)
        quad = 3;
    else if (x-queen_x<0 && y-queen_y<0)
        quad = 4;

    return quad;
}

int main()
{
    std::cin>>n;
    std::cin>>queen_x>>queen_y;    
    std::cin>>king_x>>king_y;
    std::cin>>target_x>>target_y;

    if (quadrant(king_x,king_y) == quadrant(target_x, target_y))
        std::cout<<"YES\n";
    else
        std::cout<<"NO\n";

    return 0;
}