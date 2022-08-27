// https://codeforces.com/contest/1721/problem/A
#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    int n; cin >> n;
    while(n--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        string picture = a+b;
        
        int step = 0;
        if (picture[0] == picture[1]) step++;
        if (picture[1] == picture[2]) step++;
        if (picture[2] == picture[3]) step++;

        set<char> letter;
        for (int i = 0; i < 4; i++)
        {
            letter.insert(picture[i]);
        }
        if (letter.size() == 2 && step > 2) cout<<3<<endl;
        else cout<<letter.size()-1<<endl;
    }
    return 0;
}