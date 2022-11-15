// https://codeforces.com/problemset/problem/987/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y;
    cin>>x>>y;

    if (x==y)
    {
        cout<<"=";
        return 0;
    }

    if (y * log(x) > x * log(y))
        cout<<">"<<endl;
    else if (y * log(x) < x * log(y))
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
    
    return 0;
}