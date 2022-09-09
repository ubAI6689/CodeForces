// https://codeforces.com/problemset/problem/1174/A
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n; std::cin>>n;

    std::vector<int> v;
    for (int i=0, x; i<2*n && std::cin>>x; i++)
        v.push_back(x);
    
    sort(v.begin(), v.end());
    if (v[0] == v[2*n-1]) {std::cout<< -1; return 0;}
    else for (auto it: v) std::cout<<it<<" ";
    return 0;
}

// int main()
// {
//     int n; std::cin>>n;
//     int array[2*n];
//     int sum_1=0,sum_2=0;
//     for(int i=0; i<2*n; i++)
//     {
//         int x; std::cin>>x;
//         array[i]=x;
//     }

//     for(int i=0; i<n; i++)
//     {
//         sum_1+=array[i];
//         sum_2+=array[i+n];
//     }

//     if(sum_1!=sum_2)
//     {
//         for (int i=0; i<2*n; i++)
//             std::cout<<array[i]<<" ";
//         return 0;
//     }
//     else
//     {   
//         int cnt=0;
//         for (int i=0; i<n; i++)
//         {
//             if (array[i]!=array[i+n])
//             {
//                 std::swap(array[i],array[i+n]);
//                 cnt++;
//                 break;
//             }
//         }
//         if (cnt==0) {std::cout<< -1; return 0;}
//         for (int i=0; i<2*n; i++)
//             std::cout<<array[i]<<" ";
//     }
//     return 0;
// }