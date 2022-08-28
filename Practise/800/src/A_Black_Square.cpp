// https://codeforces.com/problemset/problem/431/A
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> calories(4);
    for (auto &it : calories) cin >> it;
    
    string str;
    cin >> str;

    int total = 0;
    for (int i = 0; i < str.length(); i++)
    {
             if (str[i] == '1') total += calories[0];
        else if (str[i] == '2') total += calories[1];
        else if (str[i] == '3') total += calories[2];
        else if (str[i] == '4') total += calories[3];
    }
    cout << total << endl;
    return 0;
}