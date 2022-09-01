#include <iostream>
#include <string>
int main()
{
    int n; std::cin>>n;
    std::string s; std::cin>>s;

    int pay = 0; int array[2] = {0,0};
    for (int i = 0; i < n; i++)
    {
        s[i] == 'R' ? array[0]++ : array[1]++;
        if (array[0] == array[1] && (s[i] == s[i+1])) pay++;
    }
    std::cout<<pay;
    return 0;
}