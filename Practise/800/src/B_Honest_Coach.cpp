// https://codeforces.com/problemset/problem/1360/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> strength;
        for (int i = 0, x; i < n && cin >> x; i++) strength.push_back(x);
        sort(strength.begin(), strength.end());
        
        int min = strength[1] - strength[0]; 
        for (int i = 1; i < n; i++)
        {   
            if (i == n - 1) break;
            int different = strength[i+1] - strength[i];
            if (different < min) min = different;
        }
        cout << min << endl;
    }
    return 0;
}