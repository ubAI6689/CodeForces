#include <iostream>
#include <set>
int main()
{
    int t; std::cin>>t;
    while(t--)
    {
        int n; std::cin>>n;
        int point[3]={};
        std::string s[3][n]; std::set<std::string> d;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::string temp;
                std::cin>>temp;
                s[i][j] = temp;
                d.insert(temp);
            }
        }

        std::set<std::string>::iterator it;
        for (it = d.begin(); it!=d.end();++it)
        {   
            int index = 0;
            int count = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (s[i][j] == *it)
                    {
                        if (i == 0)      {point[i]++; count++; index = i;}
                        else if (i == 1) {point[i]++; count++; index = i;}
                        else if (i == 2) {point[i]++; count++; index = i;}
                    }
                }
            }
            if (count == 3) {for (int i = 0; i < 3; i++) point[i]--;}
            if (count == 1) {point[index]+=2;}
        }
        for (int i = 0; i < 3; i++) std::cout<<point[i]<<' ';
        std::cout<<'\n';
    }
    return 0;
}