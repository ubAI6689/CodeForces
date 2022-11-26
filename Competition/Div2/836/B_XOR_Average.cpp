#include <bits/stdc++.h>

// bitwize XOR function
int XOR(int a, int b)
{
    return a ^ b;
}


int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        int N; std::cin>>N;
        int arr[N];
        // return sequence of N integers (1 <= N <= 10^9)
        // such that XOR of all elements is equal to average of all elements
        
        // if N is odd, then XOR of all elements is 0
        if(N%2 != 0)
        {
            for(int i=0; i<N; i++)
            {
                std::cout<<1<<" ";
            }
        }

        // if N is even, then XOR of all elements is 1
        else
        {
            std::cout<<"1 3"<<" ";
            for(int i=2; i<N; i++)
            {
                std::cout<<2<<" ";
            }
        }
        std::cout<<std::endl;

        // print the array

        // for(int i=0; i<N; i++)
        // {
        //     std::cin>>arr[i];
        // }

        // int xor_sum = 0;
        // for (int i=0; i<N-1; i+=2)
        // {
        //     xor_sum += XOR(arr[i], arr[i+1]);
        // }
        // std::cout << xor_sum << std::endl;

    }
}