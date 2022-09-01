#include <iostream>
int main()
{
    int m, n;
    std::cin>>m>>n;
    char array[m+2][n+2]={};
    for (int i = 1; i <= m; i++) 
        for (int j = 1; j <= n; j++)
            std::cin>>array[i][j];

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (array[i][j] == 'S') {   
                if (array[i][j-1] == 'W' || array[i][j+1] == 'W' || 
                    array[i-1][j] == 'W' || array[i+1][j] == 'W') 
                        {std::cout<<"No\n"; return 0;}
            }
            else if (array[i][j] == '.') array[i][j] = 'D';
        }
    }

    std::cout<<"Yes\n";
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            std::cout<<array[i][j];
        std::cout<<'\n';
    }
    return 0;
}