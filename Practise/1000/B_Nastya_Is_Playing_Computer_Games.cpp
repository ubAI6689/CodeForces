#include <iostream>
#include <algorithm>
int main()
{
    int n,k;
    std::cin>>n>>k;

    int cnt=0;
    // move towards nearest end first
    if (k<=n/2) 
    {   
        cnt+=n-1+k-1; // total step taken k --> 1 --> n
        cnt+=2*n+1;   // throw stone + pick coin for every manhole, 
                      //+1 because one of the manhole have two stones on it
    }
    else
    {
        cnt+=n-k+n-1; // total step from k-->n-->1
        cnt+=2*n+1; 
    }
    std::cout<<cnt;
    return 0;
}