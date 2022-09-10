#include <iostream>
typedef long long ll;
int main()
{
    ll n; std::cin>>n;
    ll array[n+1];
    for (int i=0; i<n; i++)
    {
        ll x; std::cin>>x;
        array[i]=x;
    }

    ll sum=0;
    for (int i=n-1; i>=0; i--)
    {
        if (array[i-1]>=array[i])
        {
            array[i-1]=array[i]-1;
            if (array[i-1]<0) array[i-1]=0;
        }
        sum+=array[i];
    }
    std::cout<<sum;
    return 0;
}