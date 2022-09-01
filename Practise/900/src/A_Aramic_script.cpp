#include <iostream>
#include <map>
#include <set>
int main()
{
    int n; std::cin>>n;
    std::string word;
    std::map<std::string, int> rootword;
    for (int i = 0; i < n; i++)
    {
        std::cin>>word;
        
        std::set<char> temp;
        for (int j = 0; j < word.length(); j++)
            temp.insert(word[j]);
        
        std::set<char>::iterator it;
        std::string p = " ";
        for (it = temp.begin(); it != temp.end(); ++it)
            p += *it;
        rootword[p]++;
    }
    std::cout<<rootword.size();
    return 0;
}