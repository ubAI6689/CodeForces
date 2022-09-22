//https://codeforces.com/problemset/problem/1073/B
#include <iostream>
using namespace std;
int a[2000005],b[2000005],f=0,c[2000005];
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    for (int i=1; i<=n;i++)
    {
        cin>>c[i];
        if (b[c[i]]-f<0) cout<<0<<' ';
        if (b[c[i]]-f>=0) cout<<b[c[i]]-f<<' ';
        if (f<b[c[i]]) f=b[c[i]];
    }
    return 0;
} 

// #include <iostream>
// #include <vector>
// #include <algorithm>
// int main()
// {
//     int n; std::cin>>n;
//     std::vector<int> book(n);
//     for (auto &it:book) std::cin>>it;
    
//     std::vector<int>::iterator iter;
//     for (int i=0; i<n; i++)
//     {
//         int x;
//         std::cin>>x;
//         iter = std::find(book.begin(), book.end(), x);

//         if (iter != book.end())
//         {   
//             if (i==0)
//             {
//                 std::cout<<iter-book.begin()+1<<' ';
//                 book.erase(book.begin(), iter);
//             }
//             else
//             {
//                 std::cout<<iter-book.begin()<<' ';
//                 book.erase(book.begin(), iter);
//             }
//         }
//         else
//             std::cout<<0<<' ';
//     }
//     return 0;
// }