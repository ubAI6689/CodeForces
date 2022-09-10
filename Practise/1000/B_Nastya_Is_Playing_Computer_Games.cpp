#include <iostream>
#include <algorithm>
int main()
{
    int n,k;
    std::cin>>n>>k;

    int cnt=0;
    cnt+=2*n+1; // throw stone + pick coin for every manhole, +1 because one of the manhole have two stones on it
    cnt+=std::min(k-1, n-k); // move towards nearest end first
    cnt+=n-1; // end to end
    
    std::cout<<cnt;
    return 0;
}