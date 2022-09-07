#include <iostream>
#include <string>
int main()
{
    std::string password; std::cin>>password;
    int n; std::cin>>n;
    std::string word;
    int count_1=0;
    int count_2=0;
    for (int i = 0; i < n; i++) 
    {
        std::cin>>word;
        if (word == password) {std::cout<<"YES\n"; return 0;}
        if (word[0] == password[1]) count_1=1;
        if (word[1] == password[0]) count_2=1;
        if (count_1+count_2 == 2) {std::cout<<"YES\n";return 0;}
    }
    std::cout<<"NO\n";
    return 0;
}