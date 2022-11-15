// https://codeforces.com/problemset/problem/987/B

#include<bits/stdc++.h>
using namespace std;

// fucntion to calculate log base 10 

double log10(long long x)
{
    return log(x)/log(10);
}

int main()
{
    long long x,y;
    cin>>x>>y;

    if (y * log10(x) > x * log10(y))
        cout<<">"<<endl;
    else if (y * log10(x) < x * log10(y))
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
}