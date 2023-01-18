#include <bits/stdc++.h>

// int main()
// {
//     int q; std::cin>>q;
//     while(q--)
//     {
//         // number of square
//         int n; std::cin>>n;

//         // array to store the length of each stick (4*n)
//         int a[4*n];
//         for (int i = 0; i < 4*n; i++)
//         {
//             std::cin>>a[i];
//         }

//         // if n == 1, print YES, and continue
//         if (n == 1)
//         {
//             std::cout<<"YES\n";
//             continue;
//         }

//         // sort the array
//         std::sort(a, a + 4*n);

//         // delete the odd indexed elements
//         for (int i = 0; i < 2*n; i++)
//         {
//             a[i] = a[2*i];
//         }

//         // print the array
//         // for (int i = 0; i < 2*n; i++)
//         // {
//         //     std::cout<<a[i]<<' ';
//         // }

//         // check if the product of the first and last element is equal 
//         // to the product of the second and second last element and so on
//         int area = a[0] * a[2*n - 1];
//         // std::cout<<'\n'<<area<<'\n';
//         bool flag = true;
//         for (int i = 1; i <= n - 1; i++)
//         {
//             // std::cout<<a[i]<<'*'<<a[2*n - 1 - i]<<'='<<a[i] * a[2*n - 1 - i]<<'\n';
//             if (a[i] * a[2*n - 1 - i] != area)
//             {
//                 flag = false;
//                 break;
//             }
//         }   

//         // print the result
//         if (flag)
//         {
//             std::cout<<"YES\n";
//         }
//         else
//         {
//             std::cout<<"NO\n";
//         }
//     }
//     return 0;
// }

int main()
{
    int q; std::cin>>q;
    while(q--)
    {
        int n; std::cin>>n;
        std::vector<int> a(4*n);
        for (int i = 0; i < 4*n; i++)
        {
            std::cin>>a[i];
        }

        std::sort(a.begin(), a.end());

        int area = a[0] * a.back();

        bool flag = true;
        for (int i = 0; i < n; ++i) 
        {
			int lf = i * 2, rg = 4 * n - (i * 2) - 1;
			if (a[lf] != a[lf + 1] || a[rg] != a[rg - 1] || a[lf] * 1ll * a[rg] != area) 
            {
				flag = false;
			}
		}    
        if (flag)
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }
    }
    return 0;
}