// https://codeforces.com/problemset/problem/985/A

#include <bits/stdc++.h>

// a chessboard board 1 x n from 1 to n, n is even
// odd is black square, even is white square
// n/2 chess pieces are placed on the board
// movement allowerd is to move a chess piece to an adjacent square
// goal is to place all chess pieces either on a white or black square
// find the minimum number of moves required to achieve this goal

int main()
{
    int n; std::cin>>n; // size of the chessboard
    int a[n/2]; // array to store the positions of the chess pieces
    for (int i=0; i<n/2; i++) std::cin>>a[i]; // input the positions of the chess pieces
    std::sort(a, a+n/2); // sort the positions of the chess pieces
    int sum1=0, sum2=0; // sum1 is the sum of the positions of the chess pieces on the white squares, sum2 is the sum of the positions of the chess pieces on the black squares
    for (int i=0; i<n/2; i++) // loop through the positions of the chess pieces
    {
        sum1+=abs(a[i]-2*i-1); // add the absolute difference between the position of the chess piece and the position of the white square to sum1
        sum2+=abs(a[i]-2*i-2); // add the absolute difference between the position of the chess piece and the position of the black square to sum2
    }
    std::cout<<std::min(sum1, sum2); // output the minimum of sum1 and sum2

    return 0;
}