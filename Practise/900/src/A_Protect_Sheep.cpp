#include <iostream>
int main()
{
    int m, n;
    std::cin>>m>>n;
    char array[m][n];
    for (int i = 0; i < m; i++) for (int j = 0; j<n;j++)
    {
        std::cin>>array[i][j];
    }

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j<n;j++)
        {
            if (array[i][j] == 'S')
            {   
                // corner case
                // top left
                if (i==0 && j==0)
                {
                    if (array[i][j+1] == 'W' || array[i+1][j]=='W')
                        {std::cout<<"No\n"; return 0;}
                }
                // top right
                else if (i==0 && j==n-1)
                {
                    if (array[i][j-1] == 'W' || array[i+1][j]=='W')
                        {std::cout<<"No\n"; return 0;}
                }
                //bottom left
                else if (i==m-1 && j==0)
                {
                    if (array[i-1][j] == 'W' || array[i][j+1] == 'W')
                        {std::cout<<"No\n"; return 0;}
                }
                // bottom right
                else if (i==m-1 && j==n-1)
                {
                    if (array[i][j-1] == 'W' || array[i-1][j] == 'W')
                        {std::cout<<"No\n"; return 0;}
                }
                // left side
                else if ((i!=0 && j == 0) || (i!=m-1 && j== 0))
                {
                    if (array[i-1][j] == 'W' || array[i+1][j]=='W'|| array[i][j+1]=='W')
                        {std::cout<<"No\n"; return 0;}
                }
                //right side
                else if ((i!=0&&j==n-1) || (i!=m-1&&j==n-1))
                {
                    if (array[i-1][j] == 'W' || array[i+1][j] == 'W' || array[i][j-1]=='W')
                        {std::cout<<"No\n"; return 0;}
                }
                //top side
                else if ((i == 0 && j!=0) || (i == 0 && j != n-1))
                {
                    if (array[i][j-1]=='W' || array[i][j+1]=='W' || array[i+1][j]=='W')
                        {std::cout<<"No\n"; return 0;}
                }
                //bottom side
                else if ((i == m-1 && j != 0) || (i == m-1 && j != n-1))
                {
                    if (array[i][j-1]=='W' || array[i][j+1]=='W' || array[i-1][j]=='W')
                        {std::cout<<"No\n"; return 0;}
                }
                else if (i!=0 && i!=m-1 && j!=0 && j!= n-1)
                {
                    if (array[i][j-1] == 'W' || array[i][j+1] == 'W' || array[i-1][j] == 'W' || array[i+1][j] == 'W') 
                        {std::cout<<"No\n"; return 0;}
                }
            }
            else if (array[i][j] == '.') array[i][j] = 'D';
        }
    }

    std::cout<<"Yes\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout<<array[i][j];
        std::cout<<'\n';
    }
    return 0;
}