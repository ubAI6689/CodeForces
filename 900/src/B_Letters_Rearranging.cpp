#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        sort(s.begin(),s.end());
        unordered_set<char> letter;
        for (int i = 0; i < s.length(); i++) letter.insert(s[i]);

        if (letter.size() == 1) {cout << -1 << endl;}
        else cout << s << endl;
    }
    return 0;
}