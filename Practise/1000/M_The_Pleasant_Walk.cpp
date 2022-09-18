#include <iostream>
int main()
{
    int n, k;
    std::cin>>n>>k;

    int res=0;
    int cnt=0;
    int array[n];
    
    for (int i=0; i<n; i++)
        std::cin>>array[i];

    for (int i=0; i<n; i++)
    {
        cnt++;
        if (i == n-1 && res<cnt)
            res=cnt;
        if (array[i]==array[i+1])
        {
            if (res<cnt)
                res=cnt;
            cnt=0;
        }
    }
    std::cout<<res<<'\n';
    return 0;
}