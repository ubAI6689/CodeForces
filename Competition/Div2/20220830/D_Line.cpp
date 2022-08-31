#include <iostream>
#include <string>
typedef long long ll;

void calculateSum(std::string s, int n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L') sum+=i;
        if (s[i] == 'R') sum+=n-(i+1);
    }
    std::cout << sum << ' ';

}

int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        int n; std::cin>>n;
        std::string s; std::cin>>s;

        for(int i = 0; i<n;i++)
        {
            if (s[i] == 'R') s[i] = 'L';
            else if (s[i] == 'L') s[i] = 'R';
            calculateSum(s, n);
        }
        std::cout<<'\n';
    }
    return 0;
}