#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s;
        cin >> s;

        int count = 0;
        set<char> str;
        for (int i = 0; i < n; i++)
        {
            str.insert(s[i]);
            if (s[i] != s[i+1]) count++;
        }
        // cout << str.size() << endl;
        // cout << count << endl;
        if (count == str.size()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
} 
