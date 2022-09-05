#include <iostream>

bool isLucky(int hh, int mm)
{
    if (hh%10==7 || (hh/10)%10==7 || mm%10==7 || (mm/10)%10==7)
        return true;
    else return false;
}

int main()
{
    int n; std::cin>>n;
    int hh, mm;
    std::cin>>hh>>mm;
    int count = 0;
    
    while(!isLucky(hh, mm))
    {
        if (mm - n < 0)
        {
            if (hh - 1 < 0)
            {
                hh += 24;
            }
            hh -= 1;
            mm += 60;
        }
        mm -= n;
        count++;
    }
    std::cout<<count;
    return 0;
}