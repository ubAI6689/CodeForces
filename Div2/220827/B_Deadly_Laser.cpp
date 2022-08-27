// https://codeforces.com/contest/1721/problem/B
#include <iostream>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,m,s_x,s_y,d;
        cin>>n>>m>>s_x>>s_y>>d;
        bool x_clear=false;
        bool y_clear=false;

        for (int i = 1; i <= n; i++)
        {
            if (abs(i-s_x)<=d && abs(1-s_y)<=d){break;}
            x_clear=true;
        }

        for (int i = 1; i <= m; i++)
        {
            if (abs(1-s_x)<=d && abs(i-s_y)<=d){break;}
            y_clear=true;
        }

        if(x_clear&&y_clear)
        {
            int step = m-1+n-1;
            cout<<step<<endl;
        }
        else cout<< -1<<endl;
    }
    return 0;
}