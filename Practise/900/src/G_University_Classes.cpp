//https://codeforces.com/problemset/problem/847/G
#include <iostream>
#include <map>
int counter = 0;
int main()
{
    std::map<int, int> room;
    int n; std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::string s; std::cin>>s;
        for (int j=0; j<s.length(); j++)
        {
            if (s[j] == '1') 
            {
                room[j]++;
                if (room[j]>counter) counter=room[j];
            }
        }
    }
    std::cout<<counter;
    return 0;
}