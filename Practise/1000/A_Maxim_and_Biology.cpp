// https://codeforces.com/problemset/problem/1151/A
#include <iostream>
#include <string>

int transformChar(char input, char target)
{
    int res;
    if (abs(target-input)>13)
    {
        if (input < 'Z'-13) // A B C D E F G H I J K L M
        {   
            res=(input-'A')+('Z'-target)+1; // +1 for crossing from A-Z
            // std::cout<<input<<" move towards A and towards "<<target<<" for "<<res<<" steps.\n";
        }
        else // N O P Q R S T U V W X Y Z
        {
            res=('Z'-input)+(target-'A')+1; // +1 for crossing from Z-A
            // std::cout<<input<<" move towards Z and towards "<<target<<" for "<<res<<" steps.\n";
        }
    }
    else
    {
        res=abs(target-input);
        // std::cout<<input<<" move towards "<<target<<" for "<<res<<" steps.\n";
    }
    return res;
}

std::string target = "ACTG";
int main()
{
    int n; std::cin>>n;
    std::string s; std::cin>>s;
    
    int cnt=-1;
    for (int i=0; i<s.length()-3;i++)
    {
        int sum=0;
        for (int j=0; j<4; j++)
        {
            sum+=transformChar(s[i+j], target[j]);
        }
        if (cnt==-1||sum<cnt) cnt=sum;
    }
    std::cout<<cnt;
    return 0;
}