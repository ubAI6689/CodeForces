// https://codeforces.com/problemset/problem/984/B
// Minesweeper
// 
// Check if the given board is a valid Minesweeper board
// Cell is '*' if it contains a mine
// Cell is '.' if it does not contain a mine
// Cell is integer from 1 to 8 if it contains the number of mines in the adjacent cells

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; std::cin>>n>>m; // input the number of rows and columns
    char a[n][m]; // array to store the board
    for (int i=0; i<n; i++) // loop through the rows
    {
        for (int j=0; j<m; j++) // loop through the columns
        {
            std::cin>>a[i][j]; // input the character at the current position
        }
    }

    bool valid=true; // boolean to store whether the board is valid
    for (int i=0; i<n && valid; i++) // loop through the rows
    {
        for (int j=0; j<m && valid; j++) // loop through the columns
        {
            // if current cell is empty
            if (a[i][j]=='.')
            {
                // check if the adjacent cells contain mines
                if (i>0 && j>0 && a[i-1][j-1]=='*') valid=false; // check if the top left cell contains a mine
                if (i>0 && a[i-1][j]=='*') valid=false; // check if the top cell contains a mine
                if (i>0 && j<m-1 && a[i-1][j+1]=='*') valid=false; // check if the top right cell contains a mine
                if (j>0 && a[i][j-1]=='*') valid=false; // check if the left cell contains a mine
                if (j<m-1 && a[i][j+1]=='*') valid=false; // check if the right cell contains a mine
                if (i<n-1 && j>0 && a[i+1][j-1]=='*') valid=false; // check if the bottom left cell contains a mine
                if (i<n-1 && a[i+1][j]=='*') valid=false; // check if the bottom cell contains a mine
                if (i<n-1 && j<m-1 && a[i+1][j+1]=='*') valid=false; // check if the bottom right cell contains a mine
            }

            // if current cell is number
            else if (a[i][j]>='1' && a[i][j]<='8')
            {
                int count=0; // count the number of mines in the adjacent cells
                if (i>0 && j>0 && a[i-1][j-1]=='*') count++; // check if the top left cell contains a mine
                if (i>0 && a[i-1][j]=='*') count++; // check if the top cell contains a mine
                if (i>0 && j<m-1 && a[i-1][j+1]=='*') count++; // check if the top right cell contains a mine
                if (j>0 && a[i][j-1]=='*') count++; // check if the left cell contains a mine
                if (j<m-1 && a[i][j+1]=='*') count++; // check if the right cell contains a mine
                if (i<n-1 && j>0 && a[i+1][j-1]=='*') count++; // check if the bottom left cell contains a mine
                if (i<n-1 && a[i+1][j]=='*') count++; // check if the bottom cell contains a mine
                if (i<n-1 && j<m-1 && a[i+1][j+1]=='*') count++; // check if the bottom right cell contains a mine
                if (count!=a[i][j]-'0') valid=false; // if the number of mines in the adjacent cells is not equal to the number in the current cell, the board is invalid
            }
        }
    }
    std::cout<<(valid?"YES":"NO"); // output whether the board is valid
    return 0;
}