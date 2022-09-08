// https://codeforces.com/problemset/problem/834/A
#include <iostream>
#include <map>

int main()
{
    char before, after;
    int n;
    std::cin>>before>>after>>n;
    n%=4;

    std::map<char, int> tp;
    tp['^'] = 0;
    tp['>'] = 1;
    tp['v'] = 2;
    tp['<'] = 3;

    int bef = tp[before], af = tp[after];
    bool cw = (bef+n) % 4 == af, ccw = (bef-n+4) % 4 == af;
    if (!(cw ^ ccw)) std::cout<<"undefined";
    else if (cw) std::cout<<"cw";
    else std::cout<<"ccw";
    return 0;
}

// #include <iostream>

// bool clockWise(char initial, int round)
// {
//     if (initial == '^')
// }

// int main()
// {
//     char i, f; 
//     std::cin>>i>>f;
//     int r; std::cin>>r;
//     return 0;
// }