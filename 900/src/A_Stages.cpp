//https://codeforces.com/problemset/problem/1011/A
#include <iostream>
#include <string>
#include <vector>
#include <set>
const int ABC_TO_INT = 96; // because a == 97 in ASCII

int main()
{
    int n, stage; std::cin>>n>>stage;
    std::string s; std::cin>>s;
    
    std::set<char> letter;
    for(int i=0; i<n;i++) letter.insert(s[i]);

    std::vector<int> v;
    for (auto it : letter) {v.push_back(it);}
    if (v.size() == 2 && v[1] - v[0] == 1 && stage == 2) {std::cout<<-1;return 0;}

    int sum = 0;
    int count = 0;
    int i = 0;
    while(count!=stage)
    {
        //std::cout<<i<<' '<<stage-count<<'\n';
        if (i > v.size() - 1) {std::cout<<-1; return 0;}

        if (v[i+1]-v[i] == 1)
        {
            sum+=v[i];
            i+=2;
            count++;
            continue;
        }
        sum+=v[i]; 
        count++;
        i++;
    }
    std::cout<<sum-ABC_TO_INT*stage;
    return 0;
}