#include <bits/stdc++.h>

// int main()
// {
//     int T; std::cin>>T;
//     while(T--)
//     {
//         int n, x; std::cin>>n>>x;
        
//         // return a permutation of N such that
//         // pi is divisible by i for all 1 <= i <= N-1, pN == 1 and p1 == x
//         // the array must be lexicographically smallest
//         // if not possible, print -1

//         // vector to store the permutation
//         std::vector<int> permutation;


        
//     }
//     return 0;
// }

 
#include <iostream>
using namespace std;
 
int n, x, q, p, ni;
 
int main()
{
	cin >> q;
	while(q--)
    {
		cin >> n >> x;
		if(n%x)
        {
			cout << -1 << endl;
			continue;
		}
		p=2;
		cout << x << " ";
		for(int i=2; i<n; i++)
        {
			if(i==x)
            {
				while((n/x)%p)
                {
					p++;
				}
				x*=p;
				cout << x;
			}
            else
            {
				cout << i;
			}
			cout << " ";
		}
		cout << 1 << endl;
	}
}