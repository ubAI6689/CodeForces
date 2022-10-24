#include <iostream>
#include <string>

bool validNumber(int n)
{
    if (n<25)
        return false;
    for (int i=n/5; i>4; i--)
    {
        if (n%i==0)
            return true;
    }
    return false;
}

int main()
{
    int n; std::cin>>n;
    std::string s="";
    if (n%25==0)
    {
        int t=n/25;
        while(t--){
        std::cout<<"aeioueiouaiouaeouaeiuaeio";}
        return 0;
    }
    if (validNumber(n)) 
    {
        for (int i=0; i<n; i++)
        {
            if (i%5==0)
                s+='a';
            else if (i%5==1)
                s+='e';
            else if (i%5==2)
                s+='i';
            else if (i%5==3)
                s+='o';
            else if (i%5==4)
                s+='u';
        }
        std::cout<<s;
    }
    else 
        std::cout<< -1;
    return 0;
}