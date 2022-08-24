// https://codeforces.com/problemset/problem/1150/B
#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    char tiles[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tiles[i][j];
        }
    }

    char hash = '#';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tiles[i][j] == '.' )
            {   
                if (j == 0 || j == n - 1 || i == n - 1 || i == n - 2) {cout << "NO\n"; return 0;}
                else if (tiles[i+1][j-1] == '.' && tiles[i+1][j] == '.' && tiles[i+1][j+1] == '.' && tiles[i+2][j] == '.')
                {   
                    tiles[i][j] = hash;
                    tiles[i+1][j-1] = hash; tiles[i+1][j] = hash; tiles[i+1][j+1] = hash;
                    tiles[i+2][j] = hash;
                    continue;
                }
                else {cout << "NO\n"; return 0;}
            }
        }
    }
    cout << "YES\n";
    return 0;
}