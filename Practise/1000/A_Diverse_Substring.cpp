#include <iostream>
#include <string>

int main()
{
    int N; std::cin>>N;
    std::string S;
    std::cin>>S;

    for (int i=0; i<S.length(); i++)
    {
        if (i==S.length()-1)
        {
            std::cout<<"NO\n";
            break;
        }

        if (S[i]!=S[i+1])
        {
            std::cout<<"YES\n";
            std::cout<<S[i]<<S[i+1];
            break;
        }
    }
    return 0;
}