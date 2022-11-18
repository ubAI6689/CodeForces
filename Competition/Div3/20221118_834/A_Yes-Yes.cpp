// https://codeforces.com/contest/1759/problem/A
 #include <bits/stdc++.h>

 int main()
 {
    int T; std::cin >> T;
    while (T--)
    {
        std::string s; std::cin >> s;
        // if s is substring of "YesYesYes...YesYes" then return "YES" else "NO"  
        for (int i = 0; i < s.size(); i++)
        {
            // if not 'Y' or 'e' or 's' then return "NO"
            if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
            {
                std::cout << "NO" << std::endl;
                break;
            }
            // for i == 0
            if (i == 0)
            {
                if (s[i] == 'Y' && s[i + 1] != 'e')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
                else if (s[i] == 'e' && s[i + 1] != 's')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
                else if (s[i] == 's' && s[i + 1] != 'Y')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }     
                // if pass all conditions for i == 0 then continue
                continue;
            }

            // for i == s.size() - 1
            if (i == s.size() - 1)
            {
                if (s[i] == 'Y' && s[i - 1] != 's')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
                else if (s[i] == 'e' && s[i - 1] != 'Y')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
                else if (s[i] == 's' && s[i - 1] != 'e')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
                // if pass all conditions for i == s.size() - 1 then print "YES"
                std::cout << "YES" << std::endl;
                break;
            }

            if (s[i] == 'Y')
            {
                if (s[i+1] != 'e')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
            }
            else if (s[i] == 'e')
            {
                if (s[i+1] != 's')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
            }
            else if (s[i] == 's')
            {
                if (s[i+1] != 'Y')
                {
                    std::cout << "NO" << std::endl;
                    break;
                }
            }
        }
    }
    return 0;
 }