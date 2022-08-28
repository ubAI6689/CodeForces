// https://codeforces.com/contest/1721/problem/B
#include <iostream>
using namespace std;

bool x_clear(int n, int m, int s_x, int s_y, int d)
{
    // navigate x =1,2,3...,n at y == 1 && y == m
    int count=0;
    for (int i = 1; i <= n; i++)
        if (abs(i-s_x) <= d && abs(1-s_y) <= d) 
            {count++;break;}

    for (int i = 1; i <= n; i++)
        if (abs(i-s_x) <= d && abs(m-s_y) <= d) 
            {count++;break;}

    if (count == 2) return false;
    else return true;
}

bool y_clear(int n, int m, int s_x, int s_y, int d)
{
    // navigate y = 1,2,3,...,m at x == 1 && x = n
    int count=0;
    for (int i = 1; i <= m; i++)
        if (abs(1-s_x) <= d && abs(i-s_y) <= d) 
            {count++;break;}

    for (int i = 1; i <= m; i++)
        if (abs(n-s_x) <= d && abs(i-s_y) <= d) 
            {count++;break;}

    if (count == 2) return false;
    else return true;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,m,s_x,s_y,d;
        cin>>n>>m>>s_x>>s_y>>d;

        if(x_clear(n,m,s_x,s_y,d) && y_clear(n,m,s_x,s_y,d))
        {
            int step = m-1+n-1;
            cout<<step<<endl;
        }
        else cout<< -1<<endl;
    }
    return 0;
}