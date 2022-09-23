#include <iostream>
typedef long long ll;
int main()
{
    ll r,l;
    std::cin>>r>>l;
    // if (l-r==1) {std::cout<<"NO"; return 0;}
    std::cout<<"YES\n";
    ll num=(l-r+1)/2;
    for (int i=0;i<num;i++)
    {
        std::cout<<r<<" "<<r+1<<"\n";
        r+=2;
    }
    return 0;
}