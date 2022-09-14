#include <iostream>
#include <string>
int main()
{
    std::string start, end;
    std::cin>>start>>end;

    std::string s_hh, s_mm, e_hh, e_mm;
    s_hh = start.substr(0,2);
    s_mm = start.substr(3,2);
    e_hh = end.substr(0,2);
    e_mm = end.substr(3,2);

    int is_hh, is_mm, ie_hh, ie_mm;
    is_hh = std::stoi(s_hh);
    is_mm = std::stoi(s_mm);
    ie_hh = std::stoi(e_hh);
    ie_mm = std::stoi(e_mm);

    if (ie_mm<is_mm)
    {
        ie_mm+=60;
        ie_hh-=1;
    }

    int d_hh = ie_hh-is_hh;
    int d_mm = ie_mm-is_mm;

    int mid = (d_hh*60+d_mm)/2;

    int res_hh = is_hh+mid/60;
    int res_mm = is_mm+mid%60;

    if (res_mm >= 60)
    {
        res_mm-=60;
        res_hh+=1;
    }

    if (res_hh<10) std::cout<<0<<res_hh;
    else std::cout<<res_hh;
    std::cout<<":";
    if (res_mm<10) std::cout<<0<<res_mm;
    else std::cout<<res_mm;

    return 0;
}