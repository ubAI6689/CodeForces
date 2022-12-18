#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(int matrix[2][2])
{
    if (matrix[0][0] < matrix[0][1] && matrix[1][0] < matrix[1][1] && matrix[0][0] < matrix[1][0] && matrix[0][1] < matrix[1][1])
    {
        return true;
    }
    return false;
}

// function to rotate the matrix 90 degree clockwise
void rotateMatrix(int matrix[2][2])
{
    int temp = matrix[0][0];
    matrix[0][0] = matrix[1][0];
    matrix[1][0] = matrix[1][1];
    matrix[1][1] = matrix[0][1];
    matrix[0][1] = temp;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int matrix[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>matrix[i][j];
            }
        }

        int count = 0;
        while (count < 4)
        {
            if (isBeautiful(matrix))
            {
                cout<<"YES"<<endl;
                break;
            }
            rotateMatrix(matrix);
            count++;
        }
        if (count == 4)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}