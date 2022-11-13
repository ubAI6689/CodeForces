#include <bits/stdc++.h>
using namespace std;

// For each point (x,y) let's look at values of two diagonals: x+y and x−y. Borders of the cornfield, in fact, 
// give limits to this values in the next way: d≤x+y≤2n−d and −d≤x−y≤d — that's all we need to check. 
// So, we can iterate over all points (x,y) and check if they are inside the cornfield.

int main()
{   
    // vertices of the field at (0,d), (d,0), (n, n-d), (n-d, n)
    long long d, n;
    std::cin>>n>>d;

    long long m; std::cin>>m; // number of grasshoppers
    
    // return YES if grasshopper is inside the cornfield, else return NO
    while(m--)
    {
        long long x, y;
        std::cin>>x>>y;  
        std::cout<<((x+y >= d && x+y <= (n-d) + n && abs(x-y) <= d) ? "YES":"NO")<<std::endl;
		
    }
    return 0;
}