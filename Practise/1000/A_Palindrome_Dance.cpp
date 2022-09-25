#include <iostream>
int main()
{
    int n, a, b;
    std::cin>>n>>a>>b;
    int array[n];
    for (int i=0; i<n; i++)
    {
        int x;
        std::cin>>x;
        array[i]=x;
    }

    int burl=0;
    if (n%2!=0 && array[n/2]==2) burl+=std::min(a,b);
    for (int i=0; i<n/2; i++)
    {
        if (array[i]!=array[n-1-i])
        {
            if (array[i]==2)
            {
                if (array[n-1-i]==0)
                    burl+=a;
                else
                    burl+=b;
                continue;
            }
            else if (array[n-1-i]==2)
            {
                if (array[i]==0)
                    burl+=a;
                else
                    burl+=b;
                continue;
            }
            std::cout<< -1;
            return 0;
        }
        else
        {
            if (array[i]==2)
            {
                burl+=2*(std::min(a,b));
                continue;
            }
        }
    }
    std::cout<<burl;
    return 0;
}