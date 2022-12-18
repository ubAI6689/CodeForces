// for each test case:
//     initialize an array "winners" with n elements, all initialized to 0
//     for i = 2 to n:
//         initialize a variable "remaining_players" to the number of players with temperature value <= i
//         while remaining_players > 1:
//             pick two players at random from the remaining players
//             if the environment type for this battle is 0:
//                 the player with the lower temperature value wins
//             else:
//                 the player with the higher temperature value wins
//             eliminate the losing player from the remaining players
//         winners[i] = remaining_players
//     print the elements of the "winners" array, separated by spaces
//     print a newline
//
// Path: C_Ice_and_Fire.cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> winners(n);
        for (int i = 2; i <= n; i++) {
            int remaining_players = upper_bound(a.begin(), a.end(), i) - a.begin();
            while (remaining_players > 1) {
                int x = rand() % remaining_players;
                int y = rand() % remaining_players;
                while (y == x) {
                    y = rand() % remaining_players;
                }
                int env = rand() % 2;
                if (env == 0) {
                    if (a[x] > a[y]) {
                        a.erase(a.begin() + x);
                    } else {
                        a.erase(a.begin() + y);
                    }
                } else {
                    if (a[x] < a[y]) {
                        a.erase(a.begin() + x);
                    } else {
                        a.erase(a.begin() + y);
                    }
                }
                remaining_players--;
            }
            winners[i - 1] = a[0];
        }
        for (int i = 0; i < n; i++) {
            cout << winners[i] << " ";
        }
        cout << endl;
    }
    return 0;
}