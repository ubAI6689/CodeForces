// https://codeforces.com/problemset/problem/1008/A
#include <iostream>
#include <string>

bool isVowel(char letter)
{
    if (letter == 'a' || letter == 'e' || letter == 'i'||
        letter == 'o' || letter == 'u') return true;
    return false;
}

bool isN(char letter)
{
    if (letter == 'n') return true;
    return false;
}

void solve(std::string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if ((!isVowel(word[i]) && !isVowel(word[i+1])) && 
            (!isN(word[i]) && !isVowel(word[i+1])))
            {    
                std::cout<<"NO\n";
                return;
            }
    }
    std::cout<<"YES\n";
}

int main()
{
    std::string word;
    std::cin>>word;
    solve(word);
    return 0;
}