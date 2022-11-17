// https://codeforces.com/problemset/problem/975/B
// Mancala
// 
// Distribute stone 1 by 1 from i+1 cell to i+n cell (n is number of stone in i cell)
// if reach the last cell, go back to the first cell
// point = total of stone with even number
// goal: find the max point after one turn

#include <bits/stdc++.h>

int main()
{
    long long arr[14];
    for (int i=0; i<14; i++)
    {
        std::cin>>arr[i]; // initial number of stones in each hole
    }

    long long max=0; // max point
    for (int i=0; i<14; i++)
    {
        long long arr2[14]; // array to store the number of stones in each hole after one turn
        for (int j=0; j<14; j++)
        {
            arr2[j]=arr[j]; // copy the initial number of stones in each hole
        }
        long long n=arr[i]; // number of stones in the current hole
        arr2[i]=0; // set the number of stones in the current hole to 0
        
        // if n < 14, distribute stone 1 by 1 from i+1 cell to i+n cell
        // if n >= 14, calculate R = n/14, 
        // if n%14 == 0, add R to each cell
        // if n%14 != 0, add R to each cell except the last cell
        // then distribute stone 1 by 1 from i+1 cell to i+n%14 cell
        if (n<14)
        {
            for (int j=i+1; j<=i+n; j++)
            {
                arr2[j%14]++;
            }
        }
        else
        {
            long long R=n/14;
            for (int j=0; j<14; j++)
            {
                arr2[j]+=R;
            }
            if (n%14!=0)
            {
                for (int j=i+1; j<=i+n%14; j++)
                {
                    arr2[j%14]++;
                }
            }
        }

        long long point=0; // point after one turn
        for (int j=0; j<14; j++)
        {
            if (arr2[j]%2==0) point+=arr2[j]; // if the number of stones in the current hole is even, add it to the point
        }
        if (point>max) max=point; // if the point after one turn is greater than the max point, update the max point
    }
    std::cout<<max<<std::endl;
    return 0;
}