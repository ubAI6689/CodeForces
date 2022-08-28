// https://codeforces.com/problemset/problem/1472/B
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--)
    {   
        int num;    cin >> num;
        vector<int> one; vector<int> two;
        for (int i = 0, x; i < num && cin >> x; i++)
        {
            if (x == 1) one.push_back(x);
            else two.push_back(x);
        }

        if (one.size() > 0 && one.size() % 2 == 0) cout << "YES\n";
        else if (one.size() == 0 && two.size() % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}