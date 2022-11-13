#include <bits/stdc++.h>

// A non-empty digit string is diverse if the number of occurrences of each character in it 
// doesn't exceed the number of distinct characters in it.

// write a program to find the number of diverse substrings of a given string.

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        // read n
        long long n;
        std::cin >> n;

        // read string of length n
        std::string s;
        std::cin >> s;

        // vector of substrings
        std::vector<std::string> substrings;

        // get substrings number
        int substrings_number = n * (n + 1) / 2;
        
        // get substrings with length 100 and below
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= 100; j++)
            {
                if (i + j <= n)
                {
                    substrings.push_back(s.substr(i, j));
                }
            }
        }

        // A non-empty digit string is diverse if the number of occurrences of each character in it 
        // doesn't exceed the number of distinct characters in it.

        // iterate over all substrings
        int count = 0;
        for (int i = 0; i < substrings.size(); i++)
        {
            // if length of substring is 1, it is diverse
            if (substrings[i].length() == 1)
            {
                count++;
                continue;
            }

            // create set of characters in substring
            std::set<char> characters;
            for (int j = 0; j < substrings[i].size(); j++)
            {
                characters.insert(substrings[i][j]);
            }

            // create map of character counts
            std::map<char, int> counts;
            for (int j = 0; j < substrings[i].size(); j++)
            {
                counts[substrings[i][j]]++;
            }

            // check if substring is diverse
            bool diverse = true;
            for (auto it = counts.begin(); it != counts.end(); it++)
            {
                if (it->second > characters.size())
                {
                    diverse = false;
                    break;
                }
            }

            // increment count if diverse
            if (diverse)
            {
                count++;
            }

        }
        // print number of diverse substrings
        std::cout << count << std::endl;
    }
    return 0;    
}
