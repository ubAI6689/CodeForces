#include <bits/stdc++.h>

int main()
{
    int T; std::cin>>T;
    while(T--)
    {
        // number of rounds
        int n; std::cin>>n;
        
        // a = number of rocks allowed
        // b = number of papers allowed
        // c = number of scissors allowed

        int a; std::cin>>a;
        int b; std::cin>>b;
        int c; std::cin>>c;

        // string consisting of R, P, S by opponent
        std::string s; std::cin>>s;

        // determine if we can win minimum n/2 rounds
        // if yes, print YES and sequence of R, P, S to win
        // if no, print NO

        // number of rounds we can win
        int win = 0;

        // string consisting of R, P, S by us
        std::string ans = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R' && b > 0)
            {
                ans += 'P';
                b--;
                win++;
            }
            else if (s[i] == 'P' && c > 0)
            {
                ans += 'S';
                c--;
                win++;
            }
            else if (s[i] == 'S' && a > 0)
            {
                ans += 'R';
                a--;
                win++;
            }
            else
            {
                ans += '0';
            }
        }

        if (win >= (n + 1) / 2)
        {
            std::cout<<"YES"<<'\n';
            for (int i = 0; i < n; i++)
            {
                if (ans[i] == '0')
                {
                    if (a > 0)
                    {
                        ans[i] = 'R';
                        a--;
                    }
                    else if (b > 0)
                    {
                        ans[i] = 'P';
                        b--;
                    }
                    else
                    {
                        ans[i] = 'S';
                        c--;
                    }
                }
            }
            std::cout<<ans<<'\n';
        }
        else
        {
            std::cout<<"NO"<<'\n';
        }
    }
    return 0;
}