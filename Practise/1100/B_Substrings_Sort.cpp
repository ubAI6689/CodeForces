// https://codeforces.com/problemset/problem/988/B

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; // number of strings
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    // sort strings by length
    sort(s.begin(),s.end(),[](string a,string b){return a.length()<b.length();});
    // check if strings[i] is a substring of strings[i+1]
    for(int i=0;i<n-1;i++) if(s[i+1].find(s[i])==string::npos) 
    {
        cout<<"NO"<<endl; 
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) 
        cout<<s[i]<<endl;
    return 0;
}