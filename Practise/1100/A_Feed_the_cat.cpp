// https://codeforces.com/problemset/problem/955/A

#include <bits/stdc++.h>

int main()
{
    int hh, mm; std::cin>>hh>>mm; // time of Andrew waking up
    int H, D, C, N; std::cin>>H>>D>>C>>N; // H = cat hunger point, D = hunger point increment per minute, C = price of bun, N = -hunger point of bun

    // there is discount 20% discount for bun at 20:00
    // if andrew wake up before 20:00, determine if it's best to buy bun at 20:00 or not,  
    // else buy bun at the time of waking up
    // print the minimum cost of buying bun

    // if andrew wake up on or after 20:00, buy bun at the time of waking up
    if (hh >= 20)
    {
        std::cout<<std::fixed<<std::setprecision(4)<<std::ceil(H/(double)N)*C*0.8;
        return 0;
    }

    // if andrew wake up before 20:00, determine if it's best to buy bun at 20:00 or not
    // calculate the hunger point of cat at 20:00
    int H_20 = H + D*(20*60 - hh*60 - mm);
    // calculate the cost of buying bun at 20:00
    double C_20 = std::ceil(H_20/(double)N)*C*0.8;
    // calculate the cost of buying bun at the time of waking up
    double C_wake = std::ceil(H/(double)N)*C;
    // print the minimum cost of buying bun
    std::cout<<std::fixed<<std::setprecision(4)<<std::min(C_20, C_wake);

    return 0;
}