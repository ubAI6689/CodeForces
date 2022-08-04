// https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5];
    int num = 0;
    while (num < 5)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[num][j];
            if (cin.peek() == '\n') {
                num++;
                break;
            }
        }
    }

    int move = 0;
    while(matrix[2][2] != 1)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (matrix[i][j] == 1 && i != 2)
                {
                    matrix[i][j] = 0;
                    if (i < 2)
                    {
                        matrix[i+1][j] = 1;
                    }
                    else if (i > 2)
                    {
                        matrix[i-1][j] = 1;
                    }
                    move++;
                }
                else if (matrix[i][j] == 1 && j != 2)
                {
                    matrix[i][j] = 0;
                    if (j < 2)
                    {
                        matrix[i][j+1] = 1;
                    }
                    else if (j > 2)
                    {
                        matrix[i][j-1] = 1;
                    }
                    move++;
                }
            }
        }
    }
    cout << move << endl;
}