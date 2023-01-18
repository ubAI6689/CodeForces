// https://codeforces.com/problemset/problem/1205/A

#include <bits/stdc++.h>

int main()
{
    int n; std::cin>>n;
    if (n % 2 == 0)
    {
        std::cout<<"NO\n";
    }
    else
    {
        std::cout<<"YES\n";
        for(int i=1;i<=2*n;i++) //for each of the 2*n elements
        {
        	if(i<=n) std::cout<<2*i-i%2<<" "; //print 2*i-i%2 if i<=n
        	else std::cout<<2*(i-n)-i%2<<" "; //else print 2*(i-n)-i%2
        }
    }
}