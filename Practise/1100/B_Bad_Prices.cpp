#include <bits/stdc++.h>
int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int n; std::cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        
        int count=0;
        int bad=0;
        int min=a[0];
        int min_index=0;
        for(int i=0;i<n-1;i++)
        {     
            if (a[i]<a[i+1])
            {
                count++;
            }

            if (a[i]>a[i+1])
            {
                if (a[i+1]<=min)
                {
                    bad=0;
                    min_index=i+1;
                    min=a[min_index];
                }
                else if (a[i+1]>min)
                {
                    bad+=count;
                    count=0;
                }
            }
        }
        std::cout<<bad+min_index<<'\n';  
    }   
}