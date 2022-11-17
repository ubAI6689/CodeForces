// https://codeforces.com/problemset/problem/950/B

#include <bits/stdc++.h>
typedef long long ll;

int main()
{
    ll n,m; std::cin>>n>>m;
    ll first_msg[n], second_msg[m];
    for (ll i=0; i<n; i++) std::cin>>first_msg[i];
    for (ll i=0; i<m; i++) std::cin>>second_msg[i];

    // first and second message if from same archive
    // the archive splitted into few blocks of sum
    // the sum of each block is the same
    // find the number of blocks in the archive

    // if there is only one message, the archive only have one block
    if (n == 1 || m == 1)
    {
        std::cout<<1;
        return 0;
    }
    
    // find the combination of sum in each message that is the same
    // order of number is fixed

    // get the first number of each message
    // if the first number is the same, block++, move the pointer to the next number
    // if the first number is not the same, add next number to the lesser number until the sum is the same
    // if the sum is the same, block++, move the pointer to the next number
    // if the sum is not the same, add next number to the lesser number until the sum is the same
    // repeat until the pointer reach the end of the message
    // if the pointer reach the end of the message, move to the next message
    // repeat until the pointer reach the end of the last message

    // get the first number of each message
    ll first_msg_pointer = 0, second_msg_pointer = 0;
    ll first_msg_sum = first_msg[first_msg_pointer], second_msg_sum = second_msg[second_msg_pointer];
    ll block = 0;
    // repeat until the pointer reach the end of the message
    // if the pointer reach the end of the message, move to the next message
    // repeat until the pointer reach the end of the last message
    while (first_msg_pointer < n && second_msg_pointer < m)
    {
        // if the first number is the same, block++, move the pointer to the next number
        if (first_msg[first_msg_pointer] == second_msg[second_msg_pointer])
        {
            block++;
            first_msg_pointer++;
            second_msg_pointer++;
        }
        // if the first number is not the same, add next number to the lesser number until the sum is the same
        else if (first_msg[first_msg_pointer] < second_msg[second_msg_pointer])
        {
            while (first_msg[first_msg_pointer] < second_msg[second_msg_pointer])
            {
                first_msg_pointer++;
                first_msg[first_msg_pointer] += first_msg[first_msg_pointer-1];
            }
        }
        else
        {
            while (first_msg[first_msg_pointer] > second_msg[second_msg_pointer])
            {
                second_msg_pointer++;
                second_msg[second_msg_pointer] += second_msg[second_msg_pointer-1];
            }
        }
    }
    std::cout<<block;
    return 0;
}