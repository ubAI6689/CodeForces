#include <iostream>
long long d,i,k,m,n,p,s,t;
int main()
{
    std::cin>>n>>t;
    for(;i++<n;)
    {
        std::cin>>s>>d;
        for(;s<t;) s+=d; // same as while(s<t) s+=d;
        if(!k||s<m) m=s,k=i;
    }
    std::cout<<k;
    return 0;
}

// int main()
// {
//     int n, arrival_time;
//     std::cin>>n>>arrival_time;
//     int array[n][2]={};
//     for (int i=0; i<n; i++)
//         for (int j=0,x; j<2 && std::cin>>x; j++)
//             array[i][j]=x;
    
//     int boarding_time, bus_route;  
//     while(array[0][0]<arrival_time)
//         array[0][0]+=array[0][1];
//     boarding_time=array[0][0];
//     bus_route=1;

//     for (int i=1; i<n; i++)
//     {
//         while(array[i][0]<arrival_time)
//             array[i][0]+=array[i][1];
//         if (array[i][0]<boarding_time)
//         {
//             boarding_time=array[i][0];
//             bus_route+=i;
//         }
//     }
//     std::cout<<bus_route;
//     return 0;
// }