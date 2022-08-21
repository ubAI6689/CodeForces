// https://codeforces.com/problemset/problem/1535/A
#include <iostream>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int array[4];
        for (int i = 0; i < 4; i++) cin >> array[i];

        int winner_1 = max(array[0], array[1]);
        int winner_2 = max(array[2], array[3]);

        int loser_1 = min(array[0], array[1]);
        int loser_2 = min(array[2], array[3]);

        if (winner_1 < winner_2 && winner_1 < loser_2) cout << "NO\n";
        else if (winner_2 < winner_1 && winner_2 < loser_1) cout << "NO\n";
        else cout << "YES\n"; 
    }
    return 0;
}